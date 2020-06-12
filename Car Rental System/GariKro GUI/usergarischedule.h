#ifndef USERGARISCHEDULE_H
#define USERGARISCHEDULE_H

#include <QDialog>

namespace Ui {
class UserGariSchedule;
}

class UserGariSchedule : public QDialog
{
    Q_OBJECT

public:
    explicit UserGariSchedule(QWidget *parent = nullptr);
    ~UserGariSchedule();

private slots:
    void on_pushButton_Date1_clicked();

    void on_pushButton_2_Date2_clicked();

private:
    Ui::UserGariSchedule *ui;
};

#endif // USERGARISCHEDULE_H
