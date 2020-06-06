#ifndef DRIVERENDRIDE_H
#define DRIVERENDRIDE_H

#include <QDialog>

namespace Ui {
class DriverEndRide;
}

class DriverEndRide : public QDialog
{
    Q_OBJECT

public:
    explicit DriverEndRide(QWidget *parent = nullptr);
    ~DriverEndRide();

public slots:
    void on_pushButton_Yes_clicked();

private:
    Ui::DriverEndRide *ui;
};

#endif // DRIVERENDRIDE_H
