/********************************************************************************
** Form generated from reading UI file 'driverchangedetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERCHANGEDETAILS_H
#define UI_DRIVERCHANGEDETAILS_H

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

class Ui_DriverChangeDetails
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Password;
    QPushButton *pushButton_Number;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *DriverChangeDetails)
    {
        if (DriverChangeDetails->objectName().isEmpty())
            DriverChangeDetails->setObjectName(QStringLiteral("DriverChangeDetails"));
        DriverChangeDetails->resize(400, 271);
        DriverChangeDetails->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);font: 8pt \"MS Reference Sans Serif\";"));
        layoutWidget = new QWidget(DriverChangeDetails);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 100, 291, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Password = new QPushButton(layoutWidget);
        pushButton_Password->setObjectName(QStringLiteral("pushButton_Password"));

        verticalLayout->addWidget(pushButton_Password);

        pushButton_Number = new QPushButton(layoutWidget);
        pushButton_Number->setObjectName(QStringLiteral("pushButton_Number"));

        verticalLayout->addWidget(pushButton_Number);

        label_2 = new QLabel(DriverChangeDetails);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 10, 101, 21));
        label_3 = new QLabel(DriverChangeDetails);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 50, 191, 31));

        retranslateUi(DriverChangeDetails);

        QMetaObject::connectSlotsByName(DriverChangeDetails);
    } // setupUi

    void retranslateUi(QDialog *DriverChangeDetails)
    {
        DriverChangeDetails->setWindowTitle(QApplication::translate("DriverChangeDetails", "Dialog", Q_NULLPTR));
        pushButton_Password->setText(QApplication::translate("DriverChangeDetails", "Change Password", Q_NULLPTR));
        pushButton_Number->setText(QApplication::translate("DriverChangeDetails", "Change Phone Number", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverChangeDetails", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("DriverChangeDetails", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">CHANGE DETAILS</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverChangeDetails: public Ui_DriverChangeDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERCHANGEDETAILS_H
