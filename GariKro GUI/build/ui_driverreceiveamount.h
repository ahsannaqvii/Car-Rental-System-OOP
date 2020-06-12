/********************************************************************************
** Form generated from reading UI file 'driverreceiveamount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERRECEIVEAMOUNT_H
#define UI_DRIVERRECEIVEAMOUNT_H

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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverReceiveAmount
{
public:
    QLabel *label;
    QTextBrowser *textBrowser_ReturnAmount;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Amount;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Continue;
    QPushButton *pushButton_End;

    void setupUi(QDialog *DriverReceiveAmount)
    {
        if (DriverReceiveAmount->objectName().isEmpty())
            DriverReceiveAmount->setObjectName(QStringLiteral("DriverReceiveAmount"));
        DriverReceiveAmount->resize(400, 300);
        DriverReceiveAmount->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(DriverReceiveAmount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 30, 121, 31));
        textBrowser_ReturnAmount = new QTextBrowser(DriverReceiveAmount);
        textBrowser_ReturnAmount->setObjectName(QStringLiteral("textBrowser_ReturnAmount"));
        textBrowser_ReturnAmount->setGeometry(QRect(180, 130, 151, 31));
        textBrowser_ReturnAmount->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(DriverReceiveAmount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 134, 21));
        widget = new QWidget(DriverReceiveAmount);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 100, 292, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_Amount = new QLineEdit(widget);
        lineEdit_Amount->setObjectName(QStringLiteral("lineEdit_Amount"));
        lineEdit_Amount->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_Amount);

        widget1 = new QWidget(DriverReceiveAmount);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(140, 170, 191, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Continue = new QPushButton(widget1);
        pushButton_Continue->setObjectName(QStringLiteral("pushButton_Continue"));

        horizontalLayout_2->addWidget(pushButton_Continue);

        pushButton_End = new QPushButton(widget1);
        pushButton_End->setObjectName(QStringLiteral("pushButton_End"));

        horizontalLayout_2->addWidget(pushButton_End);


        retranslateUi(DriverReceiveAmount);

        QMetaObject::connectSlotsByName(DriverReceiveAmount);
    } // setupUi

    void retranslateUi(QDialog *DriverReceiveAmount)
    {
        DriverReceiveAmount->setWindowTitle(QApplication::translate("DriverReceiveAmount", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DriverReceiveAmount", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Payment</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("DriverReceiveAmount", "Return Amount", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverReceiveAmount", "Enter Amount Received", Q_NULLPTR));
        pushButton_Continue->setText(QApplication::translate("DriverReceiveAmount", "Continue", Q_NULLPTR));
        pushButton_End->setText(QApplication::translate("DriverReceiveAmount", "End Ride", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverReceiveAmount: public Ui_DriverReceiveAmount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERRECEIVEAMOUNT_H
