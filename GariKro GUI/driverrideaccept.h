#ifndef DRIVERRIDEACCEPT_H
#define DRIVERRIDEACCEPT_H

#include <QDialog>

namespace Ui {
class DriverRideAccept;
}

class DriverRideAccept : public QDialog
{
    Q_OBJECT

public:
    explicit DriverRideAccept(QWidget *parent = nullptr);
    ~DriverRideAccept(); 

private slots:
    void on_pushButton_Accept_clicked();

    void on_pushButton_Reject_clicked();

    void on_pushButton_ShowDetails_clicked();

private:
    Ui::DriverRideAccept *ui;
};

#endif // DRIVERRIDEACCEPT_H
