/********************************************************************************
** Form generated from reading UI file 'ridedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDEDIALOG_H
#define UI_RIDEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RideDialog
{
public:
    QGroupBox *GariKaro;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Now;
    QPushButton *pushButton2_Schedule;
    QPushButton *pushButton_3_Notifications;
    QPushButton *pushButton_WALLET;
    QPushButton *pushButton_EditAccountDetails;
    QPushButton *pushButton_6_Exit;

    void setupUi(QDialog *RideDialog)
    {
        if (RideDialog->objectName().isEmpty())
            RideDialog->setObjectName(QStringLiteral("RideDialog"));
        RideDialog->resize(541, 390);
        RideDialog->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Reference Sans Serif\";"));
        GariKaro = new QGroupBox(RideDialog);
        GariKaro->setObjectName(QStringLiteral("GariKaro"));
        GariKaro->setGeometry(QRect(150, 40, 231, 291));
        verticalLayout = new QVBoxLayout(GariKaro);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Now = new QPushButton(GariKaro);
        pushButton_Now->setObjectName(QStringLiteral("pushButton_Now"));

        verticalLayout->addWidget(pushButton_Now);

        pushButton2_Schedule = new QPushButton(GariKaro);
        pushButton2_Schedule->setObjectName(QStringLiteral("pushButton2_Schedule"));

        verticalLayout->addWidget(pushButton2_Schedule);

        pushButton_3_Notifications = new QPushButton(GariKaro);
        pushButton_3_Notifications->setObjectName(QStringLiteral("pushButton_3_Notifications"));

        verticalLayout->addWidget(pushButton_3_Notifications);

        pushButton_WALLET = new QPushButton(GariKaro);
        pushButton_WALLET->setObjectName(QStringLiteral("pushButton_WALLET"));

        verticalLayout->addWidget(pushButton_WALLET);

        pushButton_EditAccountDetails = new QPushButton(GariKaro);
        pushButton_EditAccountDetails->setObjectName(QStringLiteral("pushButton_EditAccountDetails"));

        verticalLayout->addWidget(pushButton_EditAccountDetails);

        pushButton_6_Exit = new QPushButton(GariKaro);
        pushButton_6_Exit->setObjectName(QStringLiteral("pushButton_6_Exit"));

        verticalLayout->addWidget(pushButton_6_Exit);


        retranslateUi(RideDialog);

        QMetaObject::connectSlotsByName(RideDialog);
    } // setupUi

    void retranslateUi(QDialog *RideDialog)
    {
        RideDialog->setWindowTitle(QApplication::translate("RideDialog", "Dialog", Q_NULLPTR));
        GariKaro->setTitle(QApplication::translate("RideDialog", "GARIKARO", Q_NULLPTR));
        pushButton_Now->setText(QApplication::translate("RideDialog", "Gari Karo Now!", Q_NULLPTR));
        pushButton2_Schedule->setText(QApplication::translate("RideDialog", "Gari Schedule Karo!", Q_NULLPTR));
        pushButton_3_Notifications->setText(QApplication::translate("RideDialog", "Check Notifications", Q_NULLPTR));
        pushButton_WALLET->setText(QApplication::translate("RideDialog", "Access Wallet", Q_NULLPTR));
        pushButton_EditAccountDetails->setText(QApplication::translate("RideDialog", "Edit Account Details", Q_NULLPTR));
        pushButton_6_Exit->setText(QApplication::translate("RideDialog", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RideDialog: public Ui_RideDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDEDIALOG_H
