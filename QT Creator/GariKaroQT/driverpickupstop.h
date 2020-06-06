#ifndef DRIVERPICKUPSTOP_H
#define DRIVERPICKUPSTOP_H

#include <QDialog>

namespace Ui {
class DriverPickupStop;
}

class DriverPickupStop : public QDialog
{
    Q_OBJECT

public:
    explicit DriverPickupStop(QWidget *parent = nullptr);
    ~DriverPickupStop();

public slots:
    void on_pushButton_Yes_clicked();

private:
    Ui::DriverPickupStop *ui;
};

#endif // DRIVERPICKUPSTOP_H
