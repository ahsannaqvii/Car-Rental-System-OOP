#include "usereditaccountdetails.h"
#include "ui_usereditaccountdetails.h"
#include "usereditphone.h"
#include "usereditpassword.h"
#include "usereditemail.h"

UserEditAccountDetails::UserEditAccountDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditAccountDetails)
{
    ui->setupUi(this);
}

UserEditAccountDetails::~UserEditAccountDetails()
{
    delete ui;
}

void UserEditAccountDetails::on_pushButton_EditPhone_clicked()
{
    UserEditPhone U;
    U.setModal(true);
    U.exec();
}

void UserEditAccountDetails::on_pushButton_EditPassword_clicked()
{
    UserEditPassword U;
    U.setModal(true);
    U.exec();
}

void UserEditAccountDetails::on_pushButton_EditEmail_clicked()
{
    UserEditEmail U;
    U.setModal(true);
    U.exec();
}
