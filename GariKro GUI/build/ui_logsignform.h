/********************************************************************************
** Form generated from reading UI file 'logsignform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSIGNFORM_H
#define UI_LOGSIGNFORM_H

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

class Ui_LogSignForm
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Login1;
    QPushButton *pushButton_Signup;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *LogSignForm)
    {
        if (LogSignForm->objectName().isEmpty())
            LogSignForm->setObjectName(QStringLiteral("LogSignForm"));
        LogSignForm->resize(400, 300);
        LogSignForm->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0), stop:1 rgba(255, 0, 0));\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(LogSignForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 110, 141, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Login1 = new QPushButton(layoutWidget);
        pushButton_Login1->setObjectName(QStringLiteral("pushButton_Login1"));
        pushButton_Login1->setStyleSheet(QStringLiteral("font: 12pt \"MS Reference Sans Serif\";"));

        verticalLayout->addWidget(pushButton_Login1);

        pushButton_Signup = new QPushButton(layoutWidget);
        pushButton_Signup->setObjectName(QStringLiteral("pushButton_Signup"));
        pushButton_Signup->setStyleSheet(QStringLiteral("font: 12pt \"MS Reference Sans Serif\";"));

        verticalLayout->addWidget(pushButton_Signup);

        label = new QLabel(LogSignForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 121, 41));
        label_2 = new QLabel(LogSignForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 60, 71, 31));

        retranslateUi(LogSignForm);

        QMetaObject::connectSlotsByName(LogSignForm);
    } // setupUi

    void retranslateUi(QDialog *LogSignForm)
    {
        LogSignForm->setWindowTitle(QApplication::translate("LogSignForm", "Dialog", Q_NULLPTR));
        pushButton_Login1->setText(QApplication::translate("LogSignForm", "Login", Q_NULLPTR));
        pushButton_Signup->setText(QApplication::translate("LogSignForm", "Sign Up", Q_NULLPTR));
        label->setText(QApplication::translate("LogSignForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">GariKro</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogSignForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">USER</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogSignForm: public Ui_LogSignForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSIGNFORM_H
