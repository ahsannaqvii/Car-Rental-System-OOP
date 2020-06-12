#ifndef DRIVERSIGNUP2_H
#define DRIVERSIGNUP2_H

#include <QDialog>

namespace Ui {
class DriverSignUp2;
}

class DriverSignUp2 : public QDialog
{
    Q_OBJECT

public:
    explicit DriverSignUp2(QWidget *parent = nullptr);
    ~DriverSignUp2();

private:
    Ui::DriverSignUp2 *ui;
};

#endif // DRIVERSIGNUP2_H
