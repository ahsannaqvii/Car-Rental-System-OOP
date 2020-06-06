/********************************************************************************
** Form generated from reading UI file 'driverridedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERRIDEDIALOG_H
#define UI_DRIVERRIDEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DriverRideDialog
{
public:
    QGroupBox *GariKaro;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Now;
    QPushButton *pushButton_ChangeDetails;
    QPushButton *pushButton_6_Exit;
    QLabel *label;

    void setupUi(QDialog *DriverRideDialog)
    {
        if (DriverRideDialog->objectName().isEmpty())
            DriverRideDialog->setObjectName(QStringLiteral("DriverRideDialog"));
        DriverRideDialog->resize(400, 300);
        DriverRideDialog->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        GariKaro = new QGroupBox(DriverRideDialog);
        GariKaro->setObjectName(QStringLiteral("GariKaro"));
        GariKaro->setGeometry(QRect(70, 50, 231, 201));
        GariKaro->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(GariKaro);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Now = new QPushButton(GariKaro);
        pushButton_Now->setObjectName(QStringLiteral("pushButton_Now"));

        verticalLayout->addWidget(pushButton_Now);

        pushButton_ChangeDetails = new QPushButton(GariKaro);
        pushButton_ChangeDetails->setObjectName(QStringLiteral("pushButton_ChangeDetails"));

        verticalLayout->addWidget(pushButton_ChangeDetails);

        pushButton_6_Exit = new QPushButton(GariKaro);
        pushButton_6_Exit->setObjectName(QStringLiteral("pushButton_6_Exit"));

        verticalLayout->addWidget(pushButton_6_Exit);

        label = new QLabel(DriverRideDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 81, 31));
        label->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));

        retranslateUi(DriverRideDialog);

        QMetaObject::connectSlotsByName(DriverRideDialog);
    } // setupUi

    void retranslateUi(QDialog *DriverRideDialog)
    {
        DriverRideDialog->setWindowTitle(QApplication::translate("DriverRideDialog", "Dialog", Q_NULLPTR));
        GariKaro->setTitle(QString());
        pushButton_Now->setText(QApplication::translate("DriverRideDialog", "Search For Rides", Q_NULLPTR));
        pushButton_ChangeDetails->setText(QApplication::translate("DriverRideDialog", "Change Account Details", Q_NULLPTR));
        pushButton_6_Exit->setText(QApplication::translate("DriverRideDialog", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("DriverRideDialog", "<html><head/><body><p><span style=\" font-size:16pt;\">GariKro</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverRideDialog: public Ui_DriverRideDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERRIDEDIALOG_H
