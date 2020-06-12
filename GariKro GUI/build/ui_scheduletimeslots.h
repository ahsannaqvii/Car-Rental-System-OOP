/********************************************************************************
** Form generated from reading UI file 'scheduletimeslots.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULETIMESLOTS_H
#define UI_SCHEDULETIMESLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScheduleTimeSlots
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_TIME1;
    QPushButton *pushButton_2_TIME2;
    QLabel *label;

    void setupUi(QDialog *ScheduleTimeSlots)
    {
        if (ScheduleTimeSlots->objectName().isEmpty())
            ScheduleTimeSlots->setObjectName(QStringLiteral("ScheduleTimeSlots"));
        ScheduleTimeSlots->resize(400, 300);
        ScheduleTimeSlots->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(ScheduleTimeSlots);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 90, 221, 141));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_TIME1 = new QPushButton(groupBox);
        pushButton_TIME1->setObjectName(QStringLiteral("pushButton_TIME1"));

        verticalLayout->addWidget(pushButton_TIME1);

        pushButton_2_TIME2 = new QPushButton(groupBox);
        pushButton_2_TIME2->setObjectName(QStringLiteral("pushButton_2_TIME2"));

        verticalLayout->addWidget(pushButton_2_TIME2);


        verticalLayout_2->addLayout(verticalLayout);

        label = new QLabel(ScheduleTimeSlots);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 141, 31));

        retranslateUi(ScheduleTimeSlots);

        QMetaObject::connectSlotsByName(ScheduleTimeSlots);
    } // setupUi

    void retranslateUi(QDialog *ScheduleTimeSlots)
    {
        ScheduleTimeSlots->setWindowTitle(QApplication::translate("ScheduleTimeSlots", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ScheduleTimeSlots", "TIME SLOTS", Q_NULLPTR));
        pushButton_TIME1->setText(QApplication::translate("ScheduleTimeSlots", "3:00 PM - 4:00 PM", Q_NULLPTR));
        pushButton_2_TIME2->setText(QApplication::translate("ScheduleTimeSlots", "5:00 PM - 6:00 PM", Q_NULLPTR));
        label->setText(QApplication::translate("ScheduleTimeSlots", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">TIME SLOTS</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScheduleTimeSlots: public Ui_ScheduleTimeSlots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULETIMESLOTS_H
