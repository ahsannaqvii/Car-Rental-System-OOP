/********************************************************************************
** Form generated from reading UI file 'userdisplaydetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDISPLAYDETAILS_H
#define UI_USERDISPLAYDETAILS_H

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

class Ui_UserDisplayDetails
{
public:
    QTextBrowser *textBrowser_Show;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_OK;
    QLabel *label;

    void setupUi(QDialog *UserDisplayDetails)
    {
        if (UserDisplayDetails->objectName().isEmpty())
            UserDisplayDetails->setObjectName(QStringLiteral("UserDisplayDetails"));
        UserDisplayDetails->resize(400, 300);
        UserDisplayDetails->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        textBrowser_Show = new QTextBrowser(UserDisplayDetails);
        textBrowser_Show->setObjectName(QStringLiteral("textBrowser_Show"));
        textBrowser_Show->setGeometry(QRect(60, 80, 261, 131));
        textBrowser_Show->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(UserDisplayDetails);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 230, 171, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Search = new QPushButton(layoutWidget);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));

        horizontalLayout->addWidget(pushButton_Search);

        pushButton_OK = new QPushButton(layoutWidget);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        horizontalLayout->addWidget(pushButton_OK);

        label = new QLabel(UserDisplayDetails);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 191, 31));

        retranslateUi(UserDisplayDetails);

        QMetaObject::connectSlotsByName(UserDisplayDetails);
    } // setupUi

    void retranslateUi(QDialog *UserDisplayDetails)
    {
        UserDisplayDetails->setWindowTitle(QApplication::translate("UserDisplayDetails", "Dialog", Q_NULLPTR));
        pushButton_Search->setText(QApplication::translate("UserDisplayDetails", "Search Driver", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("UserDisplayDetails", "Next", Q_NULLPTR));
        label->setText(QApplication::translate("UserDisplayDetails", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">DRIVER DETAILS</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserDisplayDetails: public Ui_UserDisplayDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDISPLAYDETAILS_H
