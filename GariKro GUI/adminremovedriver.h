#ifndef ADMINREMOVEDRIVER_H
#define ADMINREMOVEDRIVER_H

#include <QDialog>

namespace Ui {
class adminRemoveDriver;
}

class adminRemoveDriver : public QDialog
{
    Q_OBJECT

public:
    explicit adminRemoveDriver(QWidget *parent = nullptr);
    ~adminRemoveDriver();
    QString FirstName,LastName,Phone,Username,Password,CNIC,CarType,CarCompany,CarName,CarNumber;

private slots:
void on_pushButton_Remove_clicked();

private:
    Ui::adminRemoveDriver *ui;
};

#endif // ADMINREMOVEDRIVER_H
