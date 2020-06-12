/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

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

class Ui_adminDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_SetCharges;
    QPushButton *pushButton_2_AddDriver;
    QPushButton *pushButton_3_SearchDriver;
    QPushButton *pushButton_4_SearchUser;
    QPushButton *pushButton_5_RemoveDriver;
    QPushButton *pushButton_6_RemoveUser;
    QPushButton *pushButton_7_Exit;
    QLabel *label;

    void setupUi(QDialog *adminDialog)
    {
        if (adminDialog->objectName().isEmpty())
            adminDialog->setObjectName(QStringLiteral("adminDialog"));
        adminDialog->resize(429, 310);
        adminDialog->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(adminDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 241, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_SetCharges = new QPushButton(layoutWidget);
        pushButton_SetCharges->setObjectName(QStringLiteral("pushButton_SetCharges"));

        verticalLayout->addWidget(pushButton_SetCharges);

        pushButton_2_AddDriver = new QPushButton(layoutWidget);
        pushButton_2_AddDriver->setObjectName(QStringLiteral("pushButton_2_AddDriver"));

        verticalLayout->addWidget(pushButton_2_AddDriver);

        pushButton_3_SearchDriver = new QPushButton(layoutWidget);
        pushButton_3_SearchDriver->setObjectName(QStringLiteral("pushButton_3_SearchDriver"));

        verticalLayout->addWidget(pushButton_3_SearchDriver);

        pushButton_4_SearchUser = new QPushButton(layoutWidget);
        pushButton_4_SearchUser->setObjectName(QStringLiteral("pushButton_4_SearchUser"));

        verticalLayout->addWidget(pushButton_4_SearchUser);

        pushButton_5_RemoveDriver = new QPushButton(layoutWidget);
        pushButton_5_RemoveDriver->setObjectName(QStringLiteral("pushButton_5_RemoveDriver"));

        verticalLayout->addWidget(pushButton_5_RemoveDriver);

        pushButton_6_RemoveUser = new QPushButton(layoutWidget);
        pushButton_6_RemoveUser->setObjectName(QStringLiteral("pushButton_6_RemoveUser"));

        verticalLayout->addWidget(pushButton_6_RemoveUser);

        pushButton_7_Exit = new QPushButton(layoutWidget);
        pushButton_7_Exit->setObjectName(QStringLiteral("pushButton_7_Exit"));

        verticalLayout->addWidget(pushButton_7_Exit);

        label = new QLabel(adminDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 111, 31));

        retranslateUi(adminDialog);

        QMetaObject::connectSlotsByName(adminDialog);
    } // setupUi

    void retranslateUi(QDialog *adminDialog)
    {
        adminDialog->setWindowTitle(QApplication::translate("adminDialog", "Dialog", Q_NULLPTR));
        pushButton_SetCharges->setText(QApplication::translate("adminDialog", "Set Charges", Q_NULLPTR));
        pushButton_2_AddDriver->setText(QApplication::translate("adminDialog", "Add Driver", Q_NULLPTR));
        pushButton_3_SearchDriver->setText(QApplication::translate("adminDialog", "Search Driver", Q_NULLPTR));
        pushButton_4_SearchUser->setText(QApplication::translate("adminDialog", "Search User", Q_NULLPTR));
        pushButton_5_RemoveDriver->setText(QApplication::translate("adminDialog", "Remove Driver", Q_NULLPTR));
        pushButton_6_RemoveUser->setText(QApplication::translate("adminDialog", "Remove User", Q_NULLPTR));
        pushButton_7_Exit->setText(QApplication::translate("adminDialog", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("adminDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">ADMIN</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminDialog: public Ui_adminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
