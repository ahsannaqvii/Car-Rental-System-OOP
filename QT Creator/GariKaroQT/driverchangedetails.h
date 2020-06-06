#ifndef DRIVERCHANGEDETAILS_H
#define DRIVERCHANGEDETAILS_H

#include <QDialog>

namespace Ui {
class DriverChangeDetails;
}

class DriverChangeDetails : public QDialog
{
    Q_OBJECT

public:
    explicit DriverChangeDetails(QWidget *parent = nullptr);
    ~DriverChangeDetails();

public slots:
    void on_pushButton_Password_clicked();

    void on_pushButton_Number_clicked();

private:
    Ui::DriverChangeDetails *ui;
};

#endif // DRIVERCHANGEDETAILS_H
