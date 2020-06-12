#ifndef USERCHECKNOTIFICATIONS_H
#define USERCHECKNOTIFICATIONS_H

#include <QDialog>

namespace Ui {
class UserCheckNotifications;
}

class UserCheckNotifications : public QDialog
{
    Q_OBJECT

public:
    explicit UserCheckNotifications(QWidget *parent = nullptr);
    ~UserCheckNotifications();

private slots:
    void on_pushButton_Notification_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UserCheckNotifications *ui;
};

#endif // USERCHECKNOTIFICATIONS_H
