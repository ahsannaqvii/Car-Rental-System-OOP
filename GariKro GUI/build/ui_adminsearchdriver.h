/********************************************************************************
** Form generated from reading UI file 'adminsearchdriver.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSEARCHDRIVER_H
#define UI_ADMINSEARCHDRIVER_H

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

class Ui_adminSearchDriver
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
    QPushButton *pushButton_Exit1;
    QLabel *label_2;

    void setupUi(QDialog *adminSearchDriver)
    {
        if (adminSearchDriver->objectName().isEmpty())
            adminSearchDriver->setObjectName(QStringLiteral("adminSearchDriver"));
        adminSearchDriver->resize(454, 324);
        adminSearchDriver->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        textBrowser_Show = new QTextBrowser(adminSearchDriver);
        textBrowser_Show->setObjectName(QStringLiteral("textBrowser_Show"));
        textBrowser_Show->setGeometry(QRect(100, 60, 261, 131));
        textBrowser_Show->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(adminSearchDriver);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 210, 261, 85));
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

        pushButton_Exit1 = new QPushButton(layoutWidget);
        pushButton_Exit1->setObjectName(QStringLiteral("pushButton_Exit1"));

        verticalLayout_2->addWidget(pushButton_Exit1);

        label_2 = new QLabel(adminSearchDriver);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 10, 191, 31));

        retranslateUi(adminSearchDriver);

        QMetaObject::connectSlotsByName(adminSearchDriver);
    } // setupUi

    void retranslateUi(QDialog *adminSearchDriver)
    {
        adminSearchDriver->setWindowTitle(QApplication::translate("adminSearchDriver", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("adminSearchDriver", "Username", Q_NULLPTR));
        pushButton_Search->setText(QApplication::translate("adminSearchDriver", "Search", Q_NULLPTR));
        pushButton_Exit1->setText(QApplication::translate("adminSearchDriver", "Exit", Q_NULLPTR));
        label_2->setText(QApplication::translate("adminSearchDriver", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">SEARCH DRIVER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminSearchDriver: public Ui_adminSearchDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSEARCHDRIVER_H
