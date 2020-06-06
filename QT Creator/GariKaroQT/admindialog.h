#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>

namespace Ui {
class adminDialog;
}

class adminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit adminDialog(QWidget *parent = nullptr);
    ~adminDialog();

private slots:
void on_pushButton_SetCharges_clicked();

void on_pushButton_3_SearchDriver_clicked();

void on_pushButton_2_AddDriver_clicked();

void on_pushButton_4_SearchUser_clicked();

void on_pushButton_5_RemoveDriver_clicked();

void on_pushButton_7_Exit_clicked();


private:
    Ui::adminDialog *ui;
};

#endif // ADMINDIALOG_H
