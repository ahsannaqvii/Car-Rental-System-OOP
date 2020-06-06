#ifndef ADMINSEARCHDRIVER_H
#define ADMINSEARCHDRIVER_H

#include <QDialog>

namespace Ui {
class adminSearchDriver;
}

class adminSearchDriver : public QDialog
{
    Q_OBJECT

public:
    explicit adminSearchDriver(QWidget *parent = nullptr);
    ~adminSearchDriver();
    QString FirstName,LastName,Phone,Username,Password,CNIC,CarType,CarCompany,CarName,CarNumber;
private slots:
void on_pushButton_Search_clicked();


void on_pushButton_Exit1_clicked();

private:
    Ui::adminSearchDriver *ui;
};

#endif // ADMINSEARCHDRIVER_H
