/********************************************************************************
** Form generated from reading UI file 'scheduletransport.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULETRANSPORT_H
#define UI_SCHEDULETRANSPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScheduleTransport
{
public:
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_NAC;

    void setupUi(QDialog *ScheduleTransport)
    {
        if (ScheduleTransport->objectName().isEmpty())
            ScheduleTransport->setObjectName(QStringLiteral("ScheduleTransport"));
        ScheduleTransport->resize(400, 300);
        ScheduleTransport->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(ScheduleTransport);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 30, 291, 201));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_AC = new QPushButton(groupBox_2);
        pushButton_AC->setObjectName(QStringLiteral("pushButton_AC"));
        pushButton_AC->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_AC);

        pushButton_NAC = new QPushButton(groupBox_2);
        pushButton_NAC->setObjectName(QStringLiteral("pushButton_NAC"));

        verticalLayout_2->addWidget(pushButton_NAC);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(ScheduleTransport);

        QMetaObject::connectSlotsByName(ScheduleTransport);
    } // setupUi

    void retranslateUi(QDialog *ScheduleTransport)
    {
        ScheduleTransport->setWindowTitle(QApplication::translate("ScheduleTransport", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ScheduleTransport", "Ride-Selection", Q_NULLPTR));
        pushButton_AC->setText(QApplication::translate("ScheduleTransport", "Gari With AC", Q_NULLPTR));
        pushButton_NAC->setText(QApplication::translate("ScheduleTransport", "Gari Without AC", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScheduleTransport: public Ui_ScheduleTransport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULETRANSPORT_H
