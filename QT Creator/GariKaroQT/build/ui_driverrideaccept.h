/********************************************************************************
** Form generated from reading UI file 'driverrideaccept.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERRIDEACCEPT_H
#define UI_DRIVERRIDEACCEPT_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverRideAccept
{
public:
    QTextBrowser *textBrowser_Details;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ShowDetails;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Accept;
    QPushButton *pushButton_Reject;

    void setupUi(QDialog *DriverRideAccept)
    {
        if (DriverRideAccept->objectName().isEmpty())
            DriverRideAccept->setObjectName(QStringLiteral("DriverRideAccept"));
        DriverRideAccept->resize(400, 300);
        DriverRideAccept->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        textBrowser_Details = new QTextBrowser(DriverRideAccept);
        textBrowser_Details->setObjectName(QStringLiteral("textBrowser_Details"));
        textBrowser_Details->setGeometry(QRect(70, 70, 251, 141));
        textBrowser_Details->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(DriverRideAccept);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 141, 31));
        widget = new QWidget(DriverRideAccept);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 240, 261, 27));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_ShowDetails = new QPushButton(widget);
        pushButton_ShowDetails->setObjectName(QStringLiteral("pushButton_ShowDetails"));

        horizontalLayout_2->addWidget(pushButton_ShowDetails);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Accept = new QPushButton(widget);
        pushButton_Accept->setObjectName(QStringLiteral("pushButton_Accept"));

        horizontalLayout->addWidget(pushButton_Accept);

        pushButton_Reject = new QPushButton(widget);
        pushButton_Reject->setObjectName(QStringLiteral("pushButton_Reject"));

        horizontalLayout->addWidget(pushButton_Reject);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DriverRideAccept);

        QMetaObject::connectSlotsByName(DriverRideAccept);
    } // setupUi

    void retranslateUi(QDialog *DriverRideAccept)
    {
        DriverRideAccept->setWindowTitle(QApplication::translate("DriverRideAccept", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DriverRideAccept", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Ride Details</span></p></body></html>", Q_NULLPTR));
        pushButton_ShowDetails->setText(QApplication::translate("DriverRideAccept", "Show Details", Q_NULLPTR));
        pushButton_Accept->setText(QApplication::translate("DriverRideAccept", "Accept", Q_NULLPTR));
        pushButton_Reject->setText(QApplication::translate("DriverRideAccept", "Reject", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverRideAccept: public Ui_DriverRideAccept {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERRIDEACCEPT_H
