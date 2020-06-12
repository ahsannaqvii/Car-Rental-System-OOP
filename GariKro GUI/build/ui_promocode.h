/********************************************************************************
** Form generated from reading UI file 'promocode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOCODE_H
#define UI_PROMOCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Promocode
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Yes;
    QPushButton *pushButton_No;

    void setupUi(QDialog *Promocode)
    {
        if (Promocode->objectName().isEmpty())
            Promocode->setObjectName(QStringLiteral("Promocode"));
        Promocode->resize(400, 300);
        Promocode->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(Promocode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 150, 241, 31));
        label_2 = new QLabel(Promocode);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 10, 161, 51));
        label_3 = new QLabel(Promocode);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 80, 141, 31));
        widget = new QWidget(Promocode);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 200, 191, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Yes = new QPushButton(widget);
        pushButton_Yes->setObjectName(QStringLiteral("pushButton_Yes"));

        horizontalLayout->addWidget(pushButton_Yes);

        pushButton_No = new QPushButton(widget);
        pushButton_No->setObjectName(QStringLiteral("pushButton_No"));

        horizontalLayout->addWidget(pushButton_No);


        retranslateUi(Promocode);

        QMetaObject::connectSlotsByName(Promocode);
    } // setupUi

    void retranslateUi(QDialog *Promocode)
    {
        Promocode->setWindowTitle(QApplication::translate("Promocode", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Promocode", "<html><head/><body><p><span style=\" font-weight:600;\">Do You Wish To Enter Promo Code?</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Promocode", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Promocode", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Promo Code</span></p></body></html>", Q_NULLPTR));
        pushButton_Yes->setText(QApplication::translate("Promocode", "YES", Q_NULLPTR));
        pushButton_No->setText(QApplication::translate("Promocode", "NO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Promocode: public Ui_Promocode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOCODE_H
