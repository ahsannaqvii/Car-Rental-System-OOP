/********************************************************************************
** Form generated from reading UI file 'adminremovedriver.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREMOVEDRIVER_H
#define UI_ADMINREMOVEDRIVER_H

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

class Ui_adminRemoveDriver
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QPushButton *pushButton_Remove;
    QLabel *label_2;

    void setupUi(QDialog *adminRemoveDriver)
    {
        if (adminRemoveDriver->objectName().isEmpty())
            adminRemoveDriver->setObjectName(QStringLiteral("adminRemoveDriver"));
        adminRemoveDriver->resize(400, 300);
        adminRemoveDriver->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(adminRemoveDriver);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 90, 241, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        pushButton_Remove = new QPushButton(layoutWidget);
        pushButton_Remove->setObjectName(QStringLiteral("pushButton_Remove"));

        verticalLayout->addWidget(pushButton_Remove);

        label_2 = new QLabel(adminRemoveDriver);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 20, 181, 31));

        retranslateUi(adminRemoveDriver);

        QMetaObject::connectSlotsByName(adminRemoveDriver);
    } // setupUi

    void retranslateUi(QDialog *adminRemoveDriver)
    {
        adminRemoveDriver->setWindowTitle(QApplication::translate("adminRemoveDriver", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("adminRemoveDriver", "Username", Q_NULLPTR));
        pushButton_Remove->setText(QApplication::translate("adminRemoveDriver", "Remove", Q_NULLPTR));
        label_2->setText(QApplication::translate("adminRemoveDriver", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">REMOVE DRIVER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminRemoveDriver: public Ui_adminRemoveDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREMOVEDRIVER_H
