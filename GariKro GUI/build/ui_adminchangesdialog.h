/********************************************************************************
** Form generated from reading UI file 'adminchangesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCHANGESDIALOG_H
#define UI_ADMINCHANGESDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminChangesDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_KilometerRate;
    QLineEdit *lineEdit_2_Waiting;
    QLineEdit *lineEdit_3_Extra;
    QPushButton *pushButton_SaveChanges;
    QLabel *label_4;

    void setupUi(QDialog *adminChangesDialog)
    {
        if (adminChangesDialog->objectName().isEmpty())
            adminChangesDialog->setObjectName(QStringLiteral("adminChangesDialog"));
        adminChangesDialog->resize(400, 300);
        adminChangesDialog->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(adminChangesDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 70, 311, 131));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_KilometerRate = new QLineEdit(layoutWidget);
        lineEdit_KilometerRate->setObjectName(QStringLiteral("lineEdit_KilometerRate"));
        lineEdit_KilometerRate->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(lineEdit_KilometerRate);

        lineEdit_2_Waiting = new QLineEdit(layoutWidget);
        lineEdit_2_Waiting->setObjectName(QStringLiteral("lineEdit_2_Waiting"));
        lineEdit_2_Waiting->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(lineEdit_2_Waiting);

        lineEdit_3_Extra = new QLineEdit(layoutWidget);
        lineEdit_3_Extra->setObjectName(QStringLiteral("lineEdit_3_Extra"));
        lineEdit_3_Extra->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(lineEdit_3_Extra);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_SaveChanges = new QPushButton(layoutWidget);
        pushButton_SaveChanges->setObjectName(QStringLiteral("pushButton_SaveChanges"));

        verticalLayout_3->addWidget(pushButton_SaveChanges);

        label_4 = new QLabel(adminChangesDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 20, 161, 31));

        retranslateUi(adminChangesDialog);

        QMetaObject::connectSlotsByName(adminChangesDialog);
    } // setupUi

    void retranslateUi(QDialog *adminChangesDialog)
    {
        adminChangesDialog->setWindowTitle(QApplication::translate("adminChangesDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("adminChangesDialog", "Rate per Kilometer", Q_NULLPTR));
        label_2->setText(QApplication::translate("adminChangesDialog", "Waiting Charges", Q_NULLPTR));
        label_3->setText(QApplication::translate("adminChangesDialog", "Extra Charges", Q_NULLPTR));
        pushButton_SaveChanges->setText(QApplication::translate("adminChangesDialog", "Save Changes", Q_NULLPTR));
        label_4->setText(QApplication::translate("adminChangesDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">SET CHARGES</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminChangesDialog: public Ui_adminChangesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHANGESDIALOG_H
