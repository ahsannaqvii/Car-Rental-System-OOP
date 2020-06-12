/********************************************************************************
** Form generated from reading UI file 'adminsearchuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSEARCHUSER_H
#define UI_ADMINSEARCHUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminSearchUser
{
public:
    QTextBrowser *textBrowser_Show;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_Exit2;
    QLabel *label_2;

    void setupUi(QDialog *adminSearchUser)
    {
        if (adminSearchUser->objectName().isEmpty())
            adminSearchUser->setObjectName(QStringLiteral("adminSearchUser"));
        adminSearchUser->resize(400, 300);
        adminSearchUser->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        textBrowser_Show = new QTextBrowser(adminSearchUser);
        textBrowser_Show->setObjectName(QStringLiteral("textBrowser_Show"));
        textBrowser_Show->setGeometry(QRect(110, 50, 191, 101));
        textBrowser_Show->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(adminSearchUser);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 170, 193, 85));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Username = new QLineEdit(layoutWidget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_Search = new QPushButton(layoutWidget);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));

        verticalLayout->addWidget(pushButton_Search);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_Exit2 = new QPushButton(layoutWidget);
        pushButton_Exit2->setObjectName(QStringLiteral("pushButton_Exit2"));

        verticalLayout_2->addWidget(pushButton_Exit2);

        label_2 = new QLabel(adminSearchUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 10, 161, 21));

        retranslateUi(adminSearchUser);

        QMetaObject::connectSlotsByName(adminSearchUser);
    } // setupUi

    void retranslateUi(QDialog *adminSearchUser)
    {
        adminSearchUser->setWindowTitle(QApplication::translate("adminSearchUser", "Dialog", Q_NULLPTR));
        textBrowser_Show->setHtml(QApplication::translate("adminSearchUser", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Reference Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("adminSearchUser", "Username", Q_NULLPTR));
        pushButton_Search->setText(QApplication::translate("adminSearchUser", "Search", Q_NULLPTR));
        pushButton_Exit2->setText(QApplication::translate("adminSearchUser", "Exit", Q_NULLPTR));
        label_2->setText(QApplication::translate("adminSearchUser", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">SEARCH USER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminSearchUser: public Ui_adminSearchUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSEARCHUSER_H
