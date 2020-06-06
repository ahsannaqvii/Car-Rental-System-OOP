/********************************************************************************
** Form generated from reading UI file 'usercheckbalance.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHECKBALANCE_H
#define UI_USERCHECKBALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UserCheckBalance
{
public:
    QTextBrowser *textBrowser_CheckBalance;
    QPushButton *pushButton_CheckBalance;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *UserCheckBalance)
    {
        if (UserCheckBalance->objectName().isEmpty())
            UserCheckBalance->setObjectName(QStringLiteral("UserCheckBalance"));
        UserCheckBalance->resize(400, 300);
        UserCheckBalance->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        textBrowser_CheckBalance = new QTextBrowser(UserCheckBalance);
        textBrowser_CheckBalance->setObjectName(QStringLiteral("textBrowser_CheckBalance"));
        textBrowser_CheckBalance->setGeometry(QRect(90, 100, 221, 61));
        textBrowser_CheckBalance->setStyleSheet(QLatin1String("font: 16pt \"MS Reference Sans Serif\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_CheckBalance = new QPushButton(UserCheckBalance);
        pushButton_CheckBalance->setObjectName(QStringLiteral("pushButton_CheckBalance"));
        pushButton_CheckBalance->setGeometry(QRect(130, 190, 131, 23));
        pushButton_CheckBalance->setStyleSheet(QStringLiteral(""));
        label = new QLabel(UserCheckBalance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 81, 31));
        label_2 = new QLabel(UserCheckBalance);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 50, 181, 31));

        retranslateUi(UserCheckBalance);

        QMetaObject::connectSlotsByName(UserCheckBalance);
    } // setupUi

    void retranslateUi(QDialog *UserCheckBalance)
    {
        UserCheckBalance->setWindowTitle(QApplication::translate("UserCheckBalance", "Dialog", Q_NULLPTR));
        pushButton_CheckBalance->setText(QApplication::translate("UserCheckBalance", "Check Balance", Q_NULLPTR));
        label->setText(QApplication::translate("UserCheckBalance", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">USER</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserCheckBalance", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">CHECK BALANCE</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserCheckBalance: public Ui_UserCheckBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHECKBALANCE_H
