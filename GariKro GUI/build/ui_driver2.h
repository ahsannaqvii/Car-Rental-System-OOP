/********************************************************************************
** Form generated from reading UI file 'driver2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER2_H
#define UI_DRIVER2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Driver2
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QLabel *label;

    void setupUi(QDialog *Driver2)
    {
        if (Driver2->objectName().isEmpty())
            Driver2->setObjectName(QStringLiteral("Driver2"));
        Driver2->resize(400, 300);
        Driver2->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);font: 8pt \"MS Reference Sans Serif\";"));
        groupBox = new QGroupBox(Driver2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 60, 271, 161));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Username = new QLabel(groupBox);
        label_Username->setObjectName(QStringLiteral("label_Username"));

        horizontalLayout->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Password = new QLabel(groupBox);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lineEdit_Password);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));

        verticalLayout_2->addWidget(pushButton_Login);

        label = new QLabel(Driver2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 111, 31));

        retranslateUi(Driver2);

        QMetaObject::connectSlotsByName(Driver2);
    } // setupUi

    void retranslateUi(QDialog *Driver2)
    {
        Driver2->setWindowTitle(QApplication::translate("Driver2", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Driver2", "LOG IN FORM", Q_NULLPTR));
        label_Username->setText(QApplication::translate("Driver2", "Username", Q_NULLPTR));
        label_Password->setText(QApplication::translate("Driver2", "Password", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("Driver2", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("Driver2", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Driver2: public Ui_Driver2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER2_H
