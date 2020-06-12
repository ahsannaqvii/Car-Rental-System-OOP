#include "userchecknotifications.h"
#include "ui_userchecknotifications.h"
#include "mainwindow.h"
#include "ridedialog.h"
#include <QMessageBox>
#include "time.h"
#include <QFile>
#include <QTextStream>

UserCheckNotifications::UserCheckNotifications(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserCheckNotifications)
{
    ui->setupUi(this);
}

UserCheckNotifications::~UserCheckNotifications()
{
    delete ui;
}

void UserCheckNotifications::on_pushButton_Notification_clicked()
{
    QString Promo[5];
    QString PromoCode;
    int i=0 , temp = 0;
    int Discount;
    time_t system_time = time(NULL);
    struct tm *Time_Components = localtime (&system_time);
    int Date = Time_Components->tm_mday;												//Getting date
    int Month = Time_Components->tm_mon;                                            	//Getting month
    int Year = Time_Components->tm_year;                                            	//Getting year
    Year = 1900 + Year;
    if ((Rating >= 4.5) && (Rating<=5.0)){
     QFile file1("E:\\GariKaro\\GariKaroQT\\PromoCodes.txt");
        if(!file1.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
        }
      QTextStream in(&file1);
            while (!in.atEnd()){
                in >> Promo[i] >> Discount >> Promo_Validity >> Promo_Type;
            }
            srand (time(NULL));
            temp = rand()%5;
            file1.close();
             QFile file2("E:\\GariKaro\\GariKaroQT\\PromoCodes.txt");
             if(!file2.open(QFile::ReadOnly | QFile::Text)){
                     QMessageBox::warning(this,"FILE","FAILED 1");
             }
             QTextStream in1(&file2);
            while(!in1.atEnd()){
                in1 >> PromoCode >> Discount >> Promo_Validity >> Promo_Type;
                if (PromoCode == Promo[temp])
                {
                   QString x;
                   QFile file2("E:\\GariKaro\\GariKaroQT\\abc.txt");
                   if(!file2.open(QFile::WriteOnly | QFile::Text)){
                        QMessageBox::warning(this,"FILE","FAILED 1");
                    }
                    QTextStream fout(&file2);
                    fout << "Congratulations! You have been awarded with a PromoCode\n\nEnter'"  << PromoCode << "' right now to avail '" << Discount << "'%' Discount\n\nBest Before: " << Date+Promo_Validity << "/" << Month << "/" << Year << "\r\n";
                    file2.close();

                    QFile file3("E:\\GariKaro\\GariKaroQT\\abc.txt");
                    if(!file3.open(QFile::ReadOnly | QFile::Text)){
                         QMessageBox::warning(this,"FILE","FAILED 1");
                     }
                     QTextStream fin(&file3);
                     x = fin.readAll();
                     file3.close();
                     file2.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");

//                    QString x;
//                    x = "Congratulations! You have been awarded with a PromoCode\n\nEnter'"  + PromoCode + "' right now to avail '"
//                        + Discount + "'%' Discount\n\nBest Before: " << Date+Promo_Validity << "/" << Month << "/" << Year << "\r\n";
                    ui->textBrowser->setText(x);
                    break;
                }
            }

        file2.close();
    }
    else {
        QString y = "No New Notifications";
        ui->textBrowser->setText(y);
    }
}

void UserCheckNotifications::on_pushButton_2_clicked()
{
    hide();
    RideDialog R;
    R.setModal(true);
    R.exec();
}
