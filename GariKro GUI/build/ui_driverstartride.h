/********************************************************************************
** Form generated from reading UI file 'driverstartride.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERSTARTRIDE_H
#define UI_DRIVERSTARTRIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DriverStartRide
{
public:
    QPushButton *pushButton_Yes;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *DriverStartRide)
    {
        if (DriverStartRide->objectName().isEmpty())
            DriverStartRide->setObjectName(QStringLiteral("DriverStartRide"));
        DriverStartRide->resize(296, 209);
        DriverStartRide->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        pushButton_Yes = new QPushButton(DriverStartRide);
        pushButton_Yes->setObjectName(QStringLiteral("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(120, 120, 61, 23));
        label = new QLabel(DriverStartRide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 80, 101, 20));
        label_3 = new QLabel(DriverStartRide);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 20, 101, 31));

        retranslateUi(DriverStartRide);

        QMetaObject::connectSlotsByName(DriverStartRide);
    } // setupUi

    void retranslateUi(QDialog *DriverStartRide)
    {
        DriverStartRide->setWindowTitle(QApplication::translate("DriverStartRide", "Dialog", Q_NULLPTR));
        pushButton_Yes->setText(QApplication::translate("DriverStartRide", "YES", Q_NULLPTR));
        label->setText(QApplication::translate("DriverStartRide", "<html><head/><body><p><span style=\" font-size:12pt;\">Start Ride?</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("DriverStartRide", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverStartRide: public Ui_DriverStartRide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERSTARTRIDE_H
