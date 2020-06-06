#ifndef DRIVERCHANGEEMAIL_H
#define DRIVERCHANGEEMAIL_H

#include <QDialog>

namespace Ui {
class DriverChangeEmail;
}

class DriverChangeEmail : public QDialog
{
    Q_OBJECT

public:
    explicit DriverChangeEmail(QWidget *parent = nullptr);
    ~DriverChangeEmail();

public slots:
    void on_pushButton_OK_clicked();

private:
    Ui::DriverChangeEmail *ui;
};

#endif // DRIVERCHANGEEMAIL_H
