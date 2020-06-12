/********************************************************************************
** Form generated from reading UI file 'userchecknotifications.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHECKNOTIFICATIONS_H
#define UI_USERCHECKNOTIFICATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserCheckNotifications
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Notification;
    QPushButton *pushButton_2;

    void setupUi(QDialog *UserCheckNotifications)
    {
        if (UserCheckNotifications->objectName().isEmpty())
            UserCheckNotifications->setObjectName(QStringLiteral("UserCheckNotifications"));
        UserCheckNotifications->resize(359, 344);
        UserCheckNotifications->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(UserCheckNotifications);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 181, 31));
        label->setStyleSheet(QStringLiteral("font: 8pt \"MS Reference Sans Serif\";"));
        textBrowser = new QTextBrowser(UserCheckNotifications);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 60, 256, 192));
        textBrowser->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Reference Sans Serif\";\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(UserCheckNotifications);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 270, 204, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Notification = new QPushButton(widget);
        pushButton_Notification->setObjectName(QStringLiteral("pushButton_Notification"));

        horizontalLayout->addWidget(pushButton_Notification);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(UserCheckNotifications);

        QMetaObject::connectSlotsByName(UserCheckNotifications);
    } // setupUi

    void retranslateUi(QDialog *UserCheckNotifications)
    {
        UserCheckNotifications->setWindowTitle(QApplication::translate("UserCheckNotifications", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UserCheckNotifications", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">NOTIFICATIONS</span></p></body></html>", Q_NULLPTR));
        pushButton_Notification->setText(QApplication::translate("UserCheckNotifications", "Check Notifications ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UserCheckNotifications", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserCheckNotifications: public Ui_UserCheckNotifications {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHECKNOTIFICATIONS_H
