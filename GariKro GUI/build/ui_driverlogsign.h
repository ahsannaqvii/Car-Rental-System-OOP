/********************************************************************************
** Form generated from reading UI file 'driverlogsign.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERLOGSIGN_H
#define UI_DRIVERLOGSIGN_H

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

class Ui_DriverLogSign
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Login1;
    QPushButton *pushButton_Signup;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *DriverLogSign)
    {
        if (DriverLogSign->objectName().isEmpty())
            DriverLogSign->setObjectName(QStringLiteral("DriverLogSign"));
        DriverLogSign->resize(400, 300);
        DriverLogSign->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(DriverLogSign);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 120, 151, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Login1 = new QPushButton(layoutWidget);
        pushButton_Login1->setObjectName(QStringLiteral("pushButton_Login1"));

        verticalLayout->addWidget(pushButton_Login1);

        pushButton_Signup = new QPushButton(layoutWidget);
        pushButton_Signup->setObjectName(QStringLiteral("pushButton_Signup"));

        verticalLayout->addWidget(pushButton_Signup);

        label = new QLabel(DriverLogSign);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 60, 121, 31));
        label_2 = new QLabel(DriverLogSign);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 10, 121, 41));

        retranslateUi(DriverLogSign);

        QMetaObject::connectSlotsByName(DriverLogSign);
    } // setupUi

    void retranslateUi(QDialog *DriverLogSign)
    {
        DriverLogSign->setWindowTitle(QApplication::translate("DriverLogSign", "Dialog", Q_NULLPTR));
        pushButton_Login1->setText(QApplication::translate("DriverLogSign", "Login", Q_NULLPTR));
        pushButton_Signup->setText(QApplication::translate("DriverLogSign", "Sign Up", Q_NULLPTR));
        label->setText(QApplication::translate("DriverLogSign", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">DRIVER</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DriverLogSign", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DriverLogSign: public Ui_DriverLogSign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERLOGSIGN_H
