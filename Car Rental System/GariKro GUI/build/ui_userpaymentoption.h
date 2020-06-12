/********************************************************************************
** Form generated from reading UI file 'userpaymentoption.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAYMENTOPTION_H
#define UI_USERPAYMENTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPaymentOption
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Cash;
    QPushButton *pushButton_Wallet;

    void setupUi(QDialog *UserPaymentOption)
    {
        if (UserPaymentOption->objectName().isEmpty())
            UserPaymentOption->setObjectName(QStringLiteral("UserPaymentOption"));
        UserPaymentOption->resize(400, 300);
        UserPaymentOption->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(UserPaymentOption);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 70, 191, 41));
        layoutWidget = new QWidget(UserPaymentOption);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 140, 221, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Cash = new QPushButton(layoutWidget);
        pushButton_Cash->setObjectName(QStringLiteral("pushButton_Cash"));

        horizontalLayout->addWidget(pushButton_Cash);

        pushButton_Wallet = new QPushButton(layoutWidget);
        pushButton_Wallet->setObjectName(QStringLiteral("pushButton_Wallet"));

        horizontalLayout->addWidget(pushButton_Wallet);


        retranslateUi(UserPaymentOption);

        QMetaObject::connectSlotsByName(UserPaymentOption);
    } // setupUi

    void retranslateUi(QDialog *UserPaymentOption)
    {
        UserPaymentOption->setWindowTitle(QApplication::translate("UserPaymentOption", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserPaymentOption", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Payment Method?</span></p></body></html>", Q_NULLPTR));
        pushButton_Cash->setText(QApplication::translate("UserPaymentOption", "CASH", Q_NULLPTR));
        pushButton_Wallet->setText(QApplication::translate("UserPaymentOption", "WALLET", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserPaymentOption: public Ui_UserPaymentOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAYMENTOPTION_H
