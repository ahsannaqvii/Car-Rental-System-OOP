#include "admindialog.h"
#include "ui_admindialog.h"
#include "adminsetcharges.h"
#include "adminsearchdriver.h"
#include "adminadddriver.h"
#include "adminsearchuser.h"
#include "adminremovedriver.h"

adminDialog::adminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminDialog)
{
    ui->setupUi(this);
}

adminDialog::~adminDialog()
{
    delete ui;
}

void adminDialog::on_pushButton_SetCharges_clicked()
{
    hide();
    adminSetCharges admS;
    admS.setModal(true);
    admS.exec();
}

void adminDialog::on_pushButton_2_AddDriver_clicked()
{
    hide();
    adminAddDriver adminAdd;
    adminAdd.setModal(true);
    adminAdd.exec();
}

void adminDialog::on_pushButton_3_SearchDriver_clicked()
{
    hide();
    adminSearchDriver adminSearch;
    adminSearch.setModal(true);
    adminSearch.exec();
}

void adminDialog::on_pushButton_4_SearchUser_clicked()
{
    hide();
    adminSearchUser adminSearch;
    adminSearch.setModal(true);
    adminSearch.exec();
}

void adminDialog::on_pushButton_5_RemoveDriver_clicked()
{
    hide();
    adminRemoveDriver adminRemove;
    adminRemove.setModal(true);
    adminRemove.exec();
}

void adminDialog::on_pushButton_7_Exit_clicked()
{
    exit(1);
}

