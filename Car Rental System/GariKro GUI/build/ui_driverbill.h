/********************************************************************************
** Form generated from reading UI file 'driverbill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERBILL_H
#define UI_DRIVERBILL_H

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

class Ui_DriverBill
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_CalculateFare;
    QPushButton *pushButton_RecieveAmount;
    QLabel *label_8;
    QLabel *label;
    QTextBrowser *textBrowser_Bill;
    QTextBrowser *textBrowser_Fare;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *DriverBill)
    {
        if (DriverBill->objectName().isEmpty())
            DriverBill->setObjectName(QStringLiteral("DriverBill"));
        DriverBill->resize(457, 420);
        DriverBill->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(DriverBill);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 370, 231, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_CalculateFare = new QPushButton(layoutWidget);
        pushButton_CalculateFare->setObjectName(QStringLiteral("pushButton_CalculateFare"));

        horizontalLayout->addWidget(pushButton_CalculateFare);

        pushButton_RecieveAmount = new QPushButton(layoutWidget);
        pushButton_RecieveAmount->setObjectName(QStringLiteral("pushButton_RecieveAmount"));

        horizontalLayout->addWidget(pushButton_RecieveAmount);

        label_8 = new QLabel(DriverBill);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 270, 111, 31));
        label = new QLabel(DriverBill);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 0, 91, 41));
        textBrowser_Bill = new QTextBrowser(DriverBill);
        textBrowser_Bill->setObjectName(QStringLiteral("textBrowser_Bill"));
        textBrowser_Bill->setGeometry(QRect(180, 50, 251, 211));
        textBrowser_Bill->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        textBrowser_Fare = new QTextBrowser(DriverBill);
        textBrowser_Fare->setObjectName(QStringLiteral("textBrowser_Fare"));
        textBrowser_Fare->setGeometry(QRect(110, 310, 231, 51));
        textBrowser_Fare->setStyleSheet(QLatin1String("font: 14pt \"MS Reference Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        layoutWidget_2 = new QWidget(DriverBill);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 50, 126, 211));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);


        retranslateUi(DriverBill);

        QMetaObject::connectSlotsByName(DriverBill);
    } // setupUi

    void retranslateUi(QDialog *DriverBill)
    {
        DriverBill->setWindowTitle(QApplication::translate("DriverBill", "Dialog", Q_NULLPTR));
        pushButton_CalculateFare->setText(QApplication::translate("DriverBill", "Calculate Fare", Q_NULLPTR));
        pushButton_RecieveAmount->setText(QApplication::translate("DriverBill", "Receive Amount", Q_NULLPTR));
        label_8->setText(QApplication::translate("DriverBill", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Total Fare</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("DriverBill", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        textBrowser_Fare->setWhatsThis(QApplication::translate("DriverBill", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("DriverBill", "Ride Starting Time", Q_NULLPTR));
        label_7->setText(QApplication::translate("DriverBill", "Ride Ending Time", Q_NULLPTR));
        label_5->setText(QApplication::translate("DriverBill", "Ride Duration", Q_NULLPTR));
        label_3->setText(QApplication::translate("DriverBill", "Waiting Duration", Q_NULLPTR));
        label_9->setText(QApplication::translate("DriverBill", "Waiting Charges", Q_NULLPTR));
        label_4->setText(QApplication::translate("DriverBill", "Distance covered", Q_NULLPTR));
        label_6->setText(QApplication::translate("DriverBill", "Promo Code Discount", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverBill: public Ui_DriverBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERBILL_H
