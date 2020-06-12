#ifndef DRIVERCHANGENUMBER_H
#define DRIVERCHANGENUMBER_H

#include <QDialog>

namespace Ui {
class DriverChangeNumber;
}

class DriverChangeNumber : public QDialog
{
    Q_OBJECT

public:
    explicit DriverChangeNumber(QWidget *parent = nullptr);
    ~DriverChangeNumber();

public slots:
    void on_pushButton_OK_clicked();

private:
    Ui::DriverChangeNumber *ui;
};

#endif // DRIVERCHANGENUMBER_H
