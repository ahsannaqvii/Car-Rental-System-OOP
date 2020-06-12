/********************************************************************************
** Form generated from reading UI file 'usereditemail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDITEMAIL_H
#define UI_USEREDITEMAIL_H

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

class Ui_UserEditEmail
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_EditEmail;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_Email;

    void setupUi(QDialog *UserEditEmail)
    {
        if (UserEditEmail->objectName().isEmpty())
            UserEditEmail->setObjectName(QStringLiteral("UserEditEmail"));
        UserEditEmail->resize(400, 300);
        UserEditEmail->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(UserEditEmail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 101, 31));
        label_2 = new QLabel(UserEditEmail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 70, 121, 31));
        pushButton_EditEmail = new QPushButton(UserEditEmail);
        pushButton_EditEmail->setObjectName(QStringLiteral("pushButton_EditEmail"));
        pushButton_EditEmail->setGeometry(QRect(150, 170, 75, 23));
        widget = new QWidget(UserEditEmail);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 271, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_Email = new QLineEdit(widget);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_Email);


        retranslateUi(UserEditEmail);

        QMetaObject::connectSlotsByName(UserEditEmail);
    } // setupUi

    void retranslateUi(QDialog *UserEditEmail)
    {
        UserEditEmail->setWindowTitle(QApplication::translate("UserEditEmail", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserEditEmail", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserEditEmail", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Edit Email</span></p></body></html>", Q_NULLPTR));
        pushButton_EditEmail->setText(QApplication::translate("UserEditEmail", "EDIT", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserEditEmail", "Enter New Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserEditEmail: public Ui_UserEditEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITEMAIL_H
