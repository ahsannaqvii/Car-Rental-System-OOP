/********************************************************************************
** Form generated from reading UI file 'driverpickupstop.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERPICKUPSTOP_H
#define UI_DRIVERPICKUPSTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DriverPickupStop
{
public:
    QPushButton *pushButton_Yes;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *DriverPickupStop)
    {
        if (DriverPickupStop->objectName().isEmpty())
            DriverPickupStop->setObjectName(QStringLiteral("DriverPickupStop"));
        DriverPickupStop->resize(383, 248);
        DriverPickupStop->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        pushButton_Yes = new QPushButton(DriverPickupStop);
        pushButton_Yes->setObjectName(QStringLiteral("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(150, 140, 75, 23));
        label = new QLabel(DriverPickupStop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 100, 251, 20));
        label_2 = new QLabel(DriverPickupStop);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 91, 31));

        retranslateUi(DriverPickupStop);

        QMetaObject::connectSlotsByName(DriverPickupStop);
    } // setupUi

    void retranslateUi(QDialog *DriverPickupStop)
    {
        DriverPickupStop->setWindowTitle(QApplication::translate("DriverPickupStop", "Dialog", Q_NULLPTR));
        pushButton_Yes->setText(QApplication::translate("DriverPickupStop", "YES", Q_NULLPTR));
        label->setText(QApplication::translate("DriverPickupStop", "<html><head/><body><p><span style=\" font-size:12pt;\">Are You At The Pick-Up Stop?</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverPickupStop", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverPickupStop: public Ui_DriverPickupStop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERPICKUPSTOP_H
