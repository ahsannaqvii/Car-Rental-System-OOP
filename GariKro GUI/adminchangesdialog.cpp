#include "adminchangesdialog.h"
#include "ui_adminchangesdialog.h"
#include <QDebug>

adminChangesDialog::adminChangesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminChangesDialog)
{
    ui->setupUi(this);
}

adminChangesDialog::~adminChangesDialog()
{
    delete ui;
}

void adminChangesDialog::on_pushButton_SaveChanges_clicked()
{
     ratePerKilometer = ui->lineEdit_KilometerRate->text();
     waitingCharges = ui->lineEdit_2_Waiting->text();
     extraCharges = ui->lineEdit_3_Extra->text();
//    qDebug()<<ratePerKilometer;
     hide();
}
