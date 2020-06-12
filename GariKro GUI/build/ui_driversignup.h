/********************************************************************************
** Form generated from reading UI file 'driversignup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERSIGNUP_H
#define UI_DRIVERSIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverSignUp
{
public:
    QLabel *label_11;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_FirstName;
    QLineEdit *lineEdit_2_LastName;
    QLineEdit *lineEdit_3_Username;
    QLineEdit *lineEdit_4_Password;
    QLineEdit *lineEdit_5_Phone;
    QLineEdit *lineEdit_6_CNIC;
    QLineEdit *lineEdit_7_CarType;
    QLineEdit *lineEdit_8_CarCompany;
    QLineEdit *lineEdit_9_CarName;
    QLineEdit *lineEdit_10_CarNumber;
    QPushButton *pushButton_Signup1;

    void setupUi(QDialog *DriverSignUp)
    {
        if (DriverSignUp->objectName().isEmpty())
            DriverSignUp->setObjectName(QStringLiteral("DriverSignUp"));
        DriverSignUp->resize(431, 443);
        DriverSignUp->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(DriverSignUp);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 10, 141, 31));
        layoutWidget = new QWidget(DriverSignUp);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 311, 361));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_FirstName = new QLineEdit(layoutWidget);
        lineEdit_FirstName->setObjectName(QStringLiteral("lineEdit_FirstName"));
        lineEdit_FirstName->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(lineEdit_FirstName);

        lineEdit_2_LastName = new QLineEdit(layoutWidget);
        lineEdit_2_LastName->setObjectName(QStringLiteral("lineEdit_2_LastName"));
        lineEdit_2_LastName->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_2_LastName);

        lineEdit_3_Username = new QLineEdit(layoutWidget);
        lineEdit_3_Username->setObjectName(QStringLiteral("lineEdit_3_Username"));
        lineEdit_3_Username->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_3_Username);

        lineEdit_4_Password = new QLineEdit(layoutWidget);
        lineEdit_4_Password->setObjectName(QStringLiteral("lineEdit_4_Password"));
        lineEdit_4_Password->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(lineEdit_4_Password);

        lineEdit_5_Phone = new QLineEdit(layoutWidget);
        lineEdit_5_Phone->setObjectName(QStringLiteral("lineEdit_5_Phone"));
        lineEdit_5_Phone->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_5_Phone);

        lineEdit_6_CNIC = new QLineEdit(layoutWidget);
        lineEdit_6_CNIC->setObjectName(QStringLiteral("lineEdit_6_CNIC"));
        lineEdit_6_CNIC->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(lineEdit_6_CNIC);

        lineEdit_7_CarType = new QLineEdit(layoutWidget);
        lineEdit_7_CarType->setObjectName(QStringLiteral("lineEdit_7_CarType"));
        lineEdit_7_CarType->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_7_CarType);

        lineEdit_8_CarCompany = new QLineEdit(layoutWidget);
        lineEdit_8_CarCompany->setObjectName(QStringLiteral("lineEdit_8_CarCompany"));
        lineEdit_8_CarCompany->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(lineEdit_8_CarCompany);

        lineEdit_9_CarName = new QLineEdit(layoutWidget);
        lineEdit_9_CarName->setObjectName(QStringLiteral("lineEdit_9_CarName"));
        lineEdit_9_CarName->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_9_CarName);

        lineEdit_10_CarNumber = new QLineEdit(layoutWidget);
        lineEdit_10_CarNumber->setObjectName(QStringLiteral("lineEdit_10_CarNumber"));
        lineEdit_10_CarNumber->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(lineEdit_10_CarNumber);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_Signup1 = new QPushButton(layoutWidget);
        pushButton_Signup1->setObjectName(QStringLiteral("pushButton_Signup1"));

        verticalLayout_3->addWidget(pushButton_Signup1);


        retranslateUi(DriverSignUp);

        QMetaObject::connectSlotsByName(DriverSignUp);
    } // setupUi

    void retranslateUi(QDialog *DriverSignUp)
    {
        DriverSignUp->setWindowTitle(QApplication::translate("DriverSignUp", "Dialog", Q_NULLPTR));
        label_11->setText(QApplication::translate("DriverSignUp", "<html><head/><body><p><span style=\" font-size:14pt;\">Driver Signup</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("DriverSignUp", "First Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverSignUp", "Last Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("DriverSignUp", "Username", Q_NULLPTR));
        label_4->setText(QApplication::translate("DriverSignUp", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("DriverSignUp", "Phone", Q_NULLPTR));
        label_6->setText(QApplication::translate("DriverSignUp", "CNIC", Q_NULLPTR));
        label_7->setText(QApplication::translate("DriverSignUp", "Car Type", Q_NULLPTR));
        label_8->setText(QApplication::translate("DriverSignUp", "Car Company", Q_NULLPTR));
        label_9->setText(QApplication::translate("DriverSignUp", "Car Name", Q_NULLPTR));
        label_10->setText(QApplication::translate("DriverSignUp", "Car Registration Number", Q_NULLPTR));
        pushButton_Signup1->setText(QApplication::translate("DriverSignUp", "Sign up", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverSignUp: public Ui_DriverSignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERSIGNUP_H
