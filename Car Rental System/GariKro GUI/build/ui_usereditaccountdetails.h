/********************************************************************************
** Form generated from reading UI file 'usereditaccountdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDITACCOUNTDETAILS_H
#define UI_USEREDITACCOUNTDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserEditAccountDetails
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_EditPhone;
    QPushButton *pushButton_EditPassword;
    QPushButton *pushButton_EditEmail;

    void setupUi(QDialog *UserEditAccountDetails)
    {
        if (UserEditAccountDetails->objectName().isEmpty())
            UserEditAccountDetails->setObjectName(QStringLiteral("UserEditAccountDetails"));
        UserEditAccountDetails->resize(400, 300);
        UserEditAccountDetails->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(UserEditAccountDetails);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 241, 41));
        label_2 = new QLabel(UserEditAccountDetails);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 10, 101, 41));
        widget = new QWidget(UserEditAccountDetails);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 120, 221, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_EditPhone = new QPushButton(widget);
        pushButton_EditPhone->setObjectName(QStringLiteral("pushButton_EditPhone"));

        verticalLayout->addWidget(pushButton_EditPhone);

        pushButton_EditPassword = new QPushButton(widget);
        pushButton_EditPassword->setObjectName(QStringLiteral("pushButton_EditPassword"));

        verticalLayout->addWidget(pushButton_EditPassword);

        pushButton_EditEmail = new QPushButton(widget);
        pushButton_EditEmail->setObjectName(QStringLiteral("pushButton_EditEmail"));

        verticalLayout->addWidget(pushButton_EditEmail);


        retranslateUi(UserEditAccountDetails);

        QMetaObject::connectSlotsByName(UserEditAccountDetails);
    } // setupUi

    void retranslateUi(QDialog *UserEditAccountDetails)
    {
        UserEditAccountDetails->setWindowTitle(QApplication::translate("UserEditAccountDetails", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserEditAccountDetails", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Edit Account Details</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserEditAccountDetails", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        pushButton_EditPhone->setText(QApplication::translate("UserEditAccountDetails", "Change Phone Number", Q_NULLPTR));
        pushButton_EditPassword->setText(QApplication::translate("UserEditAccountDetails", "Change Password", Q_NULLPTR));
        pushButton_EditEmail->setText(QApplication::translate("UserEditAccountDetails", "Change Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserEditAccountDetails: public Ui_UserEditAccountDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITACCOUNTDETAILS_H
