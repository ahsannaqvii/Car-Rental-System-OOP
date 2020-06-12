/********************************************************************************
** Form generated from reading UI file 'driverchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERCHANGEPASSWORD_H
#define UI_DRIVERCHANGEPASSWORD_H

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

class Ui_DriverChangePassword
{
public:
    QPushButton *pushButton_OK;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Number;

    void setupUi(QDialog *DriverChangePassword)
    {
        if (DriverChangePassword->objectName().isEmpty())
            DriverChangePassword->setObjectName(QStringLiteral("DriverChangePassword"));
        DriverChangePassword->resize(400, 300);
        DriverChangePassword->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        pushButton_OK = new QPushButton(DriverChangePassword);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(150, 160, 75, 23));
        label_2 = new QLabel(DriverChangePassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 60, 221, 21));
        label_3 = new QLabel(DriverChangePassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 10, 101, 31));
        widget = new QWidget(DriverChangePassword);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 120, 332, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Number = new QLineEdit(widget);
        lineEdit_Number->setObjectName(QStringLiteral("lineEdit_Number"));
        lineEdit_Number->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(lineEdit_Number);


        retranslateUi(DriverChangePassword);

        QMetaObject::connectSlotsByName(DriverChangePassword);
    } // setupUi

    void retranslateUi(QDialog *DriverChangePassword)
    {
        DriverChangePassword->setWindowTitle(QApplication::translate("DriverChangePassword", "Dialog", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("DriverChangePassword", "OK", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverChangePassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">CHANGE PASSWORD</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("DriverChangePassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("DriverChangePassword", "<html><head/><body><p><span style=\" font-size:12pt;\">Enter New Password:</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverChangePassword: public Ui_DriverChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERCHANGEPASSWORD_H
