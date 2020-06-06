/********************************************************************************
** Form generated from reading UI file 'adminsetcharges.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSETCHARGES_H
#define UI_ADMINSETCHARGES_H

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

class Ui_adminSetCharges
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_GariWithoutAC;
    QPushButton *pushButton_2_GariWithAC;
    QPushButton *pushButton_3_GariSharing;
    QPushButton *pushButton_4_Rickshaw;
    QPushButton *pushButton_5_Bike;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *adminSetCharges)
    {
        if (adminSetCharges->objectName().isEmpty())
            adminSetCharges->setObjectName(QStringLiteral("adminSetCharges"));
        adminSetCharges->resize(400, 300);
        adminSetCharges->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(adminSetCharges);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 80, 201, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_GariWithoutAC = new QPushButton(layoutWidget);
        pushButton_GariWithoutAC->setObjectName(QStringLiteral("pushButton_GariWithoutAC"));

        verticalLayout->addWidget(pushButton_GariWithoutAC);

        pushButton_2_GariWithAC = new QPushButton(layoutWidget);
        pushButton_2_GariWithAC->setObjectName(QStringLiteral("pushButton_2_GariWithAC"));

        verticalLayout->addWidget(pushButton_2_GariWithAC);

        pushButton_3_GariSharing = new QPushButton(layoutWidget);
        pushButton_3_GariSharing->setObjectName(QStringLiteral("pushButton_3_GariSharing"));

        verticalLayout->addWidget(pushButton_3_GariSharing);

        pushButton_4_Rickshaw = new QPushButton(layoutWidget);
        pushButton_4_Rickshaw->setObjectName(QStringLiteral("pushButton_4_Rickshaw"));

        verticalLayout->addWidget(pushButton_4_Rickshaw);

        pushButton_5_Bike = new QPushButton(layoutWidget);
        pushButton_5_Bike->setObjectName(QStringLiteral("pushButton_5_Bike"));

        verticalLayout->addWidget(pushButton_5_Bike);

        label = new QLabel(adminSetCharges);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 91, 31));
        label_2 = new QLabel(adminSetCharges);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 50, 161, 21));

        retranslateUi(adminSetCharges);

        QMetaObject::connectSlotsByName(adminSetCharges);
    } // setupUi

    void retranslateUi(QDialog *adminSetCharges)
    {
        adminSetCharges->setWindowTitle(QApplication::translate("adminSetCharges", "Dialog", Q_NULLPTR));
        pushButton_GariWithoutAC->setText(QApplication::translate("adminSetCharges", "Gari without AC", Q_NULLPTR));
        pushButton_2_GariWithAC->setText(QApplication::translate("adminSetCharges", "Gari with AC", Q_NULLPTR));
        pushButton_3_GariSharing->setText(QApplication::translate("adminSetCharges", "Gari Sharing", Q_NULLPTR));
        pushButton_4_Rickshaw->setText(QApplication::translate("adminSetCharges", "Rickshaw", Q_NULLPTR));
        pushButton_5_Bike->setText(QApplication::translate("adminSetCharges", "Bike", Q_NULLPTR));
        label->setText(QApplication::translate("adminSetCharges", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">ADMIN</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("adminSetCharges", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">SET CHARGES</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminSetCharges: public Ui_adminSetCharges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETCHARGES_H
