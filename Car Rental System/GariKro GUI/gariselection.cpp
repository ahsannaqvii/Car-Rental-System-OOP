#include "gariselection.h"
#include "ui_gariselection.h"
#include "locations.h"
GariSelection::GariSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GariSelection)
{
    ui->setupUi(this);
}

GariSelection::~GariSelection()
{
    delete ui;
}

void GariSelection::on_pushButton_clicked()
{

}
