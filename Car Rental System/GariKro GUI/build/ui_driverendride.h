/********************************************************************************
** Form generated from reading UI file 'driverendride.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERENDRIDE_H
#define UI_DRIVERENDRIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DriverEndRide
{
public:
    QLabel *label;
    QPushButton *pushButton_Yes;
    QLabel *label_2;

    void setupUi(QDialog *DriverEndRide)
    {
        if (DriverEndRide->objectName().isEmpty())
            DriverEndRide->setObjectName(QStringLiteral("DriverEndRide"));
        DriverEndRide->resize(316, 220);
        DriverEndRide->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(DriverEndRide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 91, 20));
        pushButton_Yes = new QPushButton(DriverEndRide);
        pushButton_Yes->setObjectName(QStringLiteral("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(120, 120, 75, 23));
        label_2 = new QLabel(DriverEndRide);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 10, 101, 31));

        retranslateUi(DriverEndRide);

        QMetaObject::connectSlotsByName(DriverEndRide);
    } // setupUi

    void retranslateUi(QDialog *DriverEndRide)
    {
        DriverEndRide->setWindowTitle(QApplication::translate("DriverEndRide", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DriverEndRide", "<html><head/><body><p><span style=\" font-size:12pt;\">End Ride?</span></p></body></html>", Q_NULLPTR));
        pushButton_Yes->setText(QApplication::translate("DriverEndRide", "YES", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverEndRide", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverEndRide: public Ui_DriverEndRide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERENDRIDE_H
