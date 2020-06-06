/********************************************************************************
** Form generated from reading UI file 'useraccesswallet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCESSWALLET_H
#define UI_USERACCESSWALLET_H

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

class Ui_UserAccessWallet
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_CheckBalance;
    QPushButton *pushButton_AddBalance;

    void setupUi(QDialog *UserAccessWallet)
    {
        if (UserAccessWallet->objectName().isEmpty())
            UserAccessWallet->setObjectName(QStringLiteral("UserAccessWallet"));
        UserAccessWallet->resize(400, 300);
        UserAccessWallet->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"MS Reference Sans Serif\";"));
        label = new QLabel(UserAccessWallet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 121, 41));
        label_2 = new QLabel(UserAccessWallet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 60, 161, 41));
        layoutWidget = new QWidget(UserAccessWallet);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 110, 191, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_CheckBalance = new QPushButton(layoutWidget);
        pushButton_CheckBalance->setObjectName(QStringLiteral("pushButton_CheckBalance"));
        pushButton_CheckBalance->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButton_CheckBalance);

        pushButton_AddBalance = new QPushButton(layoutWidget);
        pushButton_AddBalance->setObjectName(QStringLiteral("pushButton_AddBalance"));
        pushButton_AddBalance->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButton_AddBalance);


        retranslateUi(UserAccessWallet);

        QMetaObject::connectSlotsByName(UserAccessWallet);
    } // setupUi

    void retranslateUi(QDialog *UserAccessWallet)
    {
        UserAccessWallet->setWindowTitle(QApplication::translate("UserAccessWallet", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserAccessWallet", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserAccessWallet", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Access Wallet</span></p></body></html>", Q_NULLPTR));
        pushButton_CheckBalance->setText(QApplication::translate("UserAccessWallet", "Check Balance", Q_NULLPTR));
        pushButton_AddBalance->setText(QApplication::translate("UserAccessWallet", "Add Balance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserAccessWallet: public Ui_UserAccessWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCESSWALLET_H
