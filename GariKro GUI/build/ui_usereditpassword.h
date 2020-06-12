/********************************************************************************
** Form generated from reading UI file 'usereditpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDITPASSWORD_H
#define UI_USEREDITPASSWORD_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserEditPassword
{
public:
    QLabel *label;
    QPushButton *pushButton_EditPassword;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;

    void setupUi(QDialog *UserEditPassword)
    {
        if (UserEditPassword->objectName().isEmpty())
            UserEditPassword->setObjectName(QStringLiteral("UserEditPassword"));
        UserEditPassword->resize(400, 300);
        UserEditPassword->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(UserEditPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 111, 31));
        pushButton_EditPassword = new QPushButton(UserEditPassword);
        pushButton_EditPassword->setObjectName(QStringLiteral("pushButton_EditPassword"));
        pushButton_EditPassword->setGeometry(QRect(160, 180, 75, 23));
        label_2 = new QLabel(UserEditPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 80, 211, 20));
        widget = new QWidget(UserEditPassword);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 274, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_Password);


        retranslateUi(UserEditPassword);

        QMetaObject::connectSlotsByName(UserEditPassword);
    } // setupUi

    void retranslateUi(QDialog *UserEditPassword)
    {
        UserEditPassword->setWindowTitle(QApplication::translate("UserEditPassword", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserEditPassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        pushButton_EditPassword->setText(QApplication::translate("UserEditPassword", "EDIT", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserEditPassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Edit Password</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserEditPassword", "Enter New Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserEditPassword: public Ui_UserEditPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITPASSWORD_H
