#include "logsignform.h"
#include "ui_logsignform.h"
#include"user2.h"
LogSignForm::LogSignForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogSignForm)
{
    ui->setupUi(this);
}

LogSignForm::~LogSignForm()
{
    delete ui;
}
//LogIn Sign up form
void LogSignForm::on_pushButton_Login1_clicked()
{
    User2 user;
    hide();
    user.setModal(true);
    user.exec();
    user.on_pushButton_Login_clicked();
}
