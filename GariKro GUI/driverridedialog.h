#ifndef DRIVERRIDEDIALOG_H
#define DRIVERRIDEDIALOG_H
#include <QDialog>

extern QString D;

namespace Ui {
class DriverRideDialog;
}

class DriverRideDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DriverRideDialog(QWidget *parent = nullptr);
    ~DriverRideDialog();


public slots:
    void on_pushButton_Now_clicked();

    void on_pushButton_6_Exit_clicked();

    void on_pushButton_ChangeDetails_clicked();

private:
    Ui::DriverRideDialog *ui;
};

#endif // DRIVERRIDEDIALOG_H
