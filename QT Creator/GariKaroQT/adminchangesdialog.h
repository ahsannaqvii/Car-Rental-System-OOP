#ifndef ADMINCHANGESDIALOG_H
#define ADMINCHANGESDIALOG_H

#include <QDialog>

extern QString ratePerKilometer,waitingCharges,extraCharges;

namespace Ui {
class adminChangesDialog;

}

class adminChangesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit adminChangesDialog(QWidget *parent = nullptr);
    ~adminChangesDialog();

private slots:

    void on_pushButton_SaveChanges_clicked();

private:
    Ui::adminChangesDialog *ui;
};

#endif // ADMINCHANGESDIALOG_H
