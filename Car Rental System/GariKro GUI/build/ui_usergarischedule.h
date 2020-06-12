/********************************************************************************
** Form generated from reading UI file 'usergarischedule.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERGARISCHEDULE_H
#define UI_USERGARISCHEDULE_H

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

class Ui_UserGariSchedule
{
public:
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Date1;
    QPushButton *pushButton_2_Date2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_PickupLock;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2_DropoffLock;
    QLabel *label;

    void setupUi(QDialog *UserGariSchedule)
    {
        if (UserGariSchedule->objectName().isEmpty())
            UserGariSchedule->setObjectName(QStringLiteral("UserGariSchedule"));
        UserGariSchedule->resize(485, 429);
        UserGariSchedule->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(UserGariSchedule);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 260, 131, 151));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_Date1 = new QPushButton(groupBox_2);
        pushButton_Date1->setObjectName(QStringLiteral("pushButton_Date1"));

        verticalLayout_2->addWidget(pushButton_Date1);

        pushButton_2_Date2 = new QPushButton(groupBox_2);
        pushButton_2_Date2->setObjectName(QStringLiteral("pushButton_2_Date2"));

        verticalLayout_2->addWidget(pushButton_2_Date2);

        groupBox = new QGroupBox(UserGariSchedule);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 60, 331, 191));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_PickupLock = new QLineEdit(groupBox);
        lineEdit_PickupLock->setObjectName(QStringLiteral("lineEdit_PickupLock"));
        lineEdit_PickupLock->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(lineEdit_PickupLock);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2_DropoffLock = new QLineEdit(groupBox);
        lineEdit_2_DropoffLock->setObjectName(QStringLiteral("lineEdit_2_DropoffLock"));
        lineEdit_2_DropoffLock->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lineEdit_2_DropoffLock);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(UserGariSchedule);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 221, 31));

        retranslateUi(UserGariSchedule);

        QMetaObject::connectSlotsByName(UserGariSchedule);
    } // setupUi

    void retranslateUi(QDialog *UserGariSchedule)
    {
        UserGariSchedule->setWindowTitle(QApplication::translate("UserGariSchedule", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("UserGariSchedule", "Date Selection", Q_NULLPTR));
        pushButton_Date1->setText(QApplication::translate("UserGariSchedule", "07-06-2020", Q_NULLPTR));
        pushButton_2_Date2->setText(QApplication::translate("UserGariSchedule", "08-06-2020", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UserGariSchedule", "Locations", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserGariSchedule", "Pick-Up Location", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserGariSchedule", "Drop-off Location", Q_NULLPTR));
        label->setText(QApplication::translate("UserGariSchedule", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Gari Schedule Kro</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserGariSchedule: public Ui_UserGariSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERGARISCHEDULE_H
