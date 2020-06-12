/********************************************************************************
** Form generated from reading UI file 'usereditphone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDITPHONE_H
#define UI_USEREDITPHONE_H

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

class Ui_UserEditPhone
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_EditPhone;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_Phone;

    void setupUi(QDialog *UserEditPhone)
    {
        if (UserEditPhone->objectName().isEmpty())
            UserEditPhone->setObjectName(QStringLiteral("UserEditPhone"));
        UserEditPhone->resize(400, 300);
        UserEditPhone->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"MS Reference Sans Serif\";"));
        label = new QLabel(UserEditPhone);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 111, 31));
        label_2 = new QLabel(UserEditPhone);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 80, 211, 20));
        pushButton_EditPhone = new QPushButton(UserEditPhone);
        pushButton_EditPhone->setObjectName(QStringLiteral("pushButton_EditPhone"));
        pushButton_EditPhone->setGeometry(QRect(160, 180, 75, 23));
        widget = new QWidget(UserEditPhone);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 270, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_Phone = new QLineEdit(widget);
        lineEdit_Phone->setObjectName(QStringLiteral("lineEdit_Phone"));
        lineEdit_Phone->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_Phone);


        retranslateUi(UserEditPhone);

        QMetaObject::connectSlotsByName(UserEditPhone);
    } // setupUi

    void retranslateUi(QDialog *UserEditPhone)
    {
        UserEditPhone->setWindowTitle(QApplication::translate("UserEditPhone", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserEditPhone", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserEditPhone", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Edit Phone Number</span></p></body></html>", Q_NULLPTR));
        pushButton_EditPhone->setText(QApplication::translate("UserEditPhone", "EDIT", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserEditPhone", "Enter New Number:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserEditPhone: public Ui_UserEditPhone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITPHONE_H
