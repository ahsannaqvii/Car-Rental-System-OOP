/********************************************************************************
** Form generated from reading UI file 'useraddbalance.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERADDBALANCE_H
#define UI_USERADDBALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserAddBalance
{
public:
    QLabel *label_11;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *UserAddBalance)
    {
        if (UserAddBalance->objectName().isEmpty())
            UserAddBalance->setObjectName(QStringLiteral("UserAddBalance"));
        UserAddBalance->resize(535, 469);
        UserAddBalance->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"MS Reference Sans Serif\";"));
        label_11 = new QLabel(UserAddBalance);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(170, 20, 201, 31));
        label = new QLabel(UserAddBalance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 110, 111, 20));
        label_2 = new QLabel(UserAddBalance);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 101, 20));
        label_3 = new QLabel(UserAddBalance);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 200, 51, 20));
        label_4 = new QLabel(UserAddBalance);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(116, 240, 71, 20));
        pushButton = new QPushButton(UserAddBalance);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 290, 111, 23));
        pushButton->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(UserAddBalance);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 90, 191, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_2);


        retranslateUi(UserAddBalance);

        QMetaObject::connectSlotsByName(UserAddBalance);
    } // setupUi

    void retranslateUi(QDialog *UserAddBalance)
    {
        UserAddBalance->setWindowTitle(QApplication::translate("UserAddBalance", "Dialog", Q_NULLPTR));
        label_11->setText(QApplication::translate("UserAddBalance", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Add Balance</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("UserAddBalance", "Card Number", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserAddBalance", "Expiry Date", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserAddBalance", "CVN", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserAddBalance", "Amount", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UserAddBalance", "Add Balance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserAddBalance: public Ui_UserAddBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERADDBALANCE_H
