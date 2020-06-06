#ifndef SCHEDULETIMESLOTS_H
#define SCHEDULETIMESLOTS_H

#include <QDialog>

namespace Ui {
class ScheduleTimeSlots;
}

class ScheduleTimeSlots : public QDialog
{
    Q_OBJECT

public:
    explicit ScheduleTimeSlots(QWidget *parent = nullptr);
    ~ScheduleTimeSlots();

private slots:
    void on_pushButton_TIME1_clicked();

    void on_pushButton_2_TIME2_clicked();

private:
    Ui::ScheduleTimeSlots *ui;
};

#endif // SCHEDULETIMESLOTS_H
