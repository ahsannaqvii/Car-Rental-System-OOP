/********************************************************************************
** Form generated from reading UI file 'locations.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONS_H
#define UI_LOCATIONS_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Locations
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_PickupLock;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2_DropoffLock;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_NAC;
    QPushButton *pushButton_Share;
    QPushButton *pushButton_Bike;
    QPushButton *pushButton_Rickshaw;
    QLabel *label_3;

    void setupUi(QDialog *Locations)
    {
        if (Locations->objectName().isEmpty())
            Locations->setObjectName(QStringLiteral("Locations"));
        Locations->resize(572, 475);
        Locations->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Reference Sans Serif\";"));
        groupBox = new QGroupBox(Locations);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 60, 331, 191));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_PickupLock = new QLineEdit(groupBox);
        lineEdit_PickupLock->setObjectName(QStringLiteral("lineEdit_PickupLock"));
        lineEdit_PickupLock->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(lineEdit_PickupLock);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2_DropoffLock = new QLineEdit(groupBox);
        lineEdit_2_DropoffLock->setObjectName(QStringLiteral("lineEdit_2_DropoffLock"));
        lineEdit_2_DropoffLock->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lineEdit_2_DropoffLock);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(Locations);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 260, 331, 201));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 211, 171));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_AC = new QPushButton(layoutWidget);
        pushButton_AC->setObjectName(QStringLiteral("pushButton_AC"));
        pushButton_AC->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_AC);

        pushButton_NAC = new QPushButton(layoutWidget);
        pushButton_NAC->setObjectName(QStringLiteral("pushButton_NAC"));

        verticalLayout_2->addWidget(pushButton_NAC);

        pushButton_Share = new QPushButton(layoutWidget);
        pushButton_Share->setObjectName(QStringLiteral("pushButton_Share"));

        verticalLayout_2->addWidget(pushButton_Share);

        pushButton_Bike = new QPushButton(layoutWidget);
        pushButton_Bike->setObjectName(QStringLiteral("pushButton_Bike"));

        verticalLayout_2->addWidget(pushButton_Bike);

        pushButton_Rickshaw = new QPushButton(layoutWidget);
        pushButton_Rickshaw->setObjectName(QStringLiteral("pushButton_Rickshaw"));

        verticalLayout_2->addWidget(pushButton_Rickshaw);

        label_3 = new QLabel(Locations);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 20, 171, 31));

        retranslateUi(Locations);

        QMetaObject::connectSlotsByName(Locations);
    } // setupUi

    void retranslateUi(QDialog *Locations)
    {
        Locations->setWindowTitle(QApplication::translate("Locations", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Locations", "Locations", Q_NULLPTR));
        label->setText(QApplication::translate("Locations", "Pick-Up Location", Q_NULLPTR));
        label_2->setText(QApplication::translate("Locations", "Drop-off Location", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Locations", "Ride-Selection", Q_NULLPTR));
        pushButton_AC->setText(QApplication::translate("Locations", "Gari With AC", Q_NULLPTR));
        pushButton_NAC->setText(QApplication::translate("Locations", "Gari Without AC", Q_NULLPTR));
        pushButton_Share->setText(QApplication::translate("Locations", "Gari Sharing", Q_NULLPTR));
        pushButton_Bike->setText(QApplication::translate("Locations", "Bike", Q_NULLPTR));
        pushButton_Rickshaw->setText(QApplication::translate("Locations", "Rickshaw", Q_NULLPTR));
        label_3->setText(QApplication::translate("Locations", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">GariKro Now</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Locations: public Ui_Locations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONS_H
