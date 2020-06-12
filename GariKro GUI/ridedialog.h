#ifndef RIDEDIALOG_H
#define RIDEDIALOG_H

#include <QDialog>

namespace Ui {
class RideDialog;
}

class RideDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RideDialog(QWidget *parent = nullptr);
    ~RideDialog();

public slots:
    void on_pushButton_Now_clicked();

    void on_pushButton_6_Exit_clicked();

    void on_pushButton2_Schedule_clicked();

    void on_pushButton_WALLET_clicked();

private slots:
    void on_pushButton_EditAccountDetails_clicked();

    void on_pushButton_3_Notifications_clicked();

private:
    Ui::RideDialog *ui;
};

#endif // RIDEDIALOG_H
