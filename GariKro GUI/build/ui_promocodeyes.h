/********************************************************************************
** Form generated from reading UI file 'promocodeyes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOCODEYES_H
#define UI_PROMOCODEYES_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PromocodeYes
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Promo;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *PromocodeYes)
    {
        if (PromocodeYes->objectName().isEmpty())
            PromocodeYes->setObjectName(QStringLiteral("PromocodeYes"));
        PromocodeYes->resize(400, 300);
        PromocodeYes->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(PromocodeYes);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 210, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_OK = new QPushButton(layoutWidget);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        horizontalLayout->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(layoutWidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout->addWidget(pushButton_Cancel);

        layoutWidget1 = new QWidget(PromocodeYes);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 120, 321, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_Promo = new QLineEdit(layoutWidget1);
        lineEdit_Promo->setObjectName(QStringLiteral("lineEdit_Promo"));
        lineEdit_Promo->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lineEdit_Promo);

        label_2 = new QLabel(PromocodeYes);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 60, 121, 21));
        label_3 = new QLabel(PromocodeYes);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 10, 101, 31));

        retranslateUi(PromocodeYes);

        QMetaObject::connectSlotsByName(PromocodeYes);
    } // setupUi

    void retranslateUi(QDialog *PromocodeYes)
    {
        PromocodeYes->setWindowTitle(QApplication::translate("PromocodeYes", "Dialog", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("PromocodeYes", "OK", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("PromocodeYes", "CANCEL", Q_NULLPTR));
        label->setText(QApplication::translate("PromocodeYes", "Enter Promo Code", Q_NULLPTR));
        label_2->setText(QApplication::translate("PromocodeYes", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Promo Code</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("PromocodeYes", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">GariKro</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PromocodeYes: public Ui_PromocodeYes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOCODEYES_H
