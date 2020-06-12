#ifndef ADMINSETCHARGES_H
#define ADMINSETCHARGES_H

#include <QDialog>

namespace Ui {
class adminSetCharges;
}

class adminSetCharges : public QDialog
{
    Q_OBJECT

public:
    explicit adminSetCharges(QWidget *parent = nullptr);
    ~adminSetCharges();
    QString tempType,tempRate,tempWaiting,tempExtra;

private slots:
void on_pushButton_GariWithoutAC_clicked();

void on_pushButton_5_Bike_clicked();

void on_pushButton_4_Rickshaw_clicked();

void on_pushButton_3_GariSharing_clicked();

void on_pushButton_2_GariWithAC_clicked();

private:
    Ui::adminSetCharges *ui;
};

#endif // ADMINSETCHARGES_H
