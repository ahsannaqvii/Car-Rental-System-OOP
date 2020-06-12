#ifndef DRIVERSTARTRIDE_H
#define DRIVERSTARTRIDE_H

#include <QDialog>

namespace Ui {
class DriverStartRide;
}

class DriverStartRide : public QDialog
{
    Q_OBJECT

public:
    explicit DriverStartRide(QWidget *parent = nullptr);
    ~DriverStartRide();

public slots:
    void on_pushButton_Yes_clicked();

private:
    Ui::DriverStartRide *ui;
};

#endif // DRIVERSTARTRIDE_H
