#ifndef ADMINADDDRIVER_H
#define ADMINADDDRIVER_H

#include <QDialog>

namespace Ui {
class adminAddDriver;
}

class adminAddDriver : public QDialog
{
    Q_OBJECT

public:
    explicit adminAddDriver(QWidget *parent = nullptr);
    ~adminAddDriver();
    QString FirstName,LastName,Username,Password,CNIC,Phone,CarType,CarName,CarCompany,CarNumber;

private slots:
void on_pushButton_Signup_clicked();

private:
    Ui::adminAddDriver *ui;
};

#endif // ADMINADDDRIVER_H
