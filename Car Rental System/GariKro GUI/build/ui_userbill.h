/********************************************************************************
** Form generated from reading UI file 'userbill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERBILL_H
#define UI_USERBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserBill
{
public:
    QLabel *label;
    QTextBrowser *textBrowser_Bill;
    QTextBrowser *textBrowser_Fare;
    QLabel *label_8;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_CalculateFare;
    QPushButton *pushButton_Exit;

    void setupUi(QDialog *UserBill)
    {
        if (UserBill->objectName().isEmpty())
            UserBill->setObjectName(QStringLiteral("UserBill"));
        UserBill->resize(468, 414);
        UserBill->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(UserBill);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 0, 91, 41));
        textBrowser_Bill = new QTextBrowser(UserBill);
        textBrowser_Bill->setObjectName(QStringLiteral("textBrowser_Bill"));
        textBrowser_Bill->setGeometry(QRect(180, 50, 251, 211));
        textBrowser_Bill->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        textBrowser_Fare = new QTextBrowser(UserBill);
        textBrowser_Fare->setObjectName(QStringLiteral("textBrowser_Fare"));
        textBrowser_Fare->setGeometry(QRect(110, 310, 231, 51));
        textBrowser_Fare->setStyleSheet(QLatin1String("font: 14pt \"MS Reference Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_8 = new QLabel(UserBill);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 270, 111, 31));
        layoutWidget = new QWidget(UserBill);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 126, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        layoutWidget1 = new QWidget(UserBill);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 370, 191, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_CalculateFare = new QPushButton(layoutWidget1);
        pushButton_CalculateFare->setObjectName(QStringLiteral("pushButton_CalculateFare"));

        horizontalLayout->addWidget(pushButton_CalculateFare);

        pushButton_Exit = new QPushButton(layoutWidget1);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));

        horizontalLayout->addWidget(pushButton_Exit);


        retranslateUi(UserBill);

        QMetaObject::connectSlotsByName(UserBill);
    } // setupUi

    void retranslateUi(QDialog *UserBill)
    {
        UserBill->setWindowTitle(QApplication::translate("UserBill", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserBill", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        textBrowser_Fare->setWhatsThis(QApplication::translate("UserBill", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("UserBill", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Total Fare</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserBill", "Ride Starting Time", Q_NULLPTR));
        label_7->setText(QApplication::translate("UserBill", "Ride Ending Time", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserBill", "Ride Duration", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserBill", "Waiting Duration", Q_NULLPTR));
        label_9->setText(QApplication::translate("UserBill", "Waiting Charges", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserBill", "Distance covered", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserBill", "Promo Code Discount", Q_NULLPTR));
        pushButton_CalculateFare->setText(QApplication::translate("UserBill", "Calculate Fare", Q_NULLPTR));
        pushButton_Exit->setText(QApplication::translate("UserBill", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserBill: public Ui_UserBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERBILL_H
