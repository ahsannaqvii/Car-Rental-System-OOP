#include "adminadddriver.h"
#include "ui_adminadddriver.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

adminAddDriver::adminAddDriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminAddDriver)
{
    ui->setupUi(this);
}

adminAddDriver::~adminAddDriver()
{
    delete ui;
}

void adminAddDriver::on_pushButton_Signup_clicked()
{
    QString entered_username= ui->lineEdit_3_Username->text();
    int flag = 0;
    QFile temp("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    if(!temp.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED");
    }

    QTextStream inn(&temp);
    while(!inn.atEnd())
    {
        inn>>FirstName>>LastName>>Username>>Password>>Phone>>CNIC>>CarType>>CarCompany>>CarName>>CarNumber;
        if(entered_username == Username)
        {
           QMessageBox::warning(this,"Signup","Username already in Use!");
           flag++;
           break;
        }
    }

    if(flag == 0)
    {
        temp.flush();
        temp.close();
        FirstName = ui->lineEdit_FirstName->text();
        LastName = ui->lineEdit_2_LastName->text();
        Password = ui->lineEdit_4_Password->text();
        Phone = ui->lineEdit_5_Phone->text();
        CNIC = ui->lineEdit_6_CNIC->text();
        CarType = ui->lineEdit_7_CarType->text();
        CarCompany = ui->lineEdit_8_CarCompany->text();
        CarName = ui->lineEdit_9_CarName->text();
        CarNumber = ui->lineEdit_10_CarNumber->text();

        QFile file("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
        if(!file.open(QIODevice::Append))
        {
            QMessageBox::warning(this,"FILE","FAILED");
        }

        QTextStream in(&file);

        in<<FirstName<<" "<<LastName<<" "<<entered_username<<" "<<Password<<" "<<Phone<<" "<<CNIC<<" "<<CarType<<" "<<CarCompany<<" "
        <<CarName<<" "<<CarNumber<<"\r\n";
        QMessageBox::information(this,"Driver Signup","Account Created");
        hide();
    }
}
