#ifndef SCHEDULETRANSPORT_H
#define SCHEDULETRANSPORT_H

#include <QDialog>

namespace Ui {
class ScheduleTransport;
}

class ScheduleTransport : public QDialog
{
    Q_OBJECT

public:
    explicit ScheduleTransport(QWidget *parent = nullptr);
    ~ScheduleTransport();

private slots:
    void on_pushButton_AC_clicked();

    void on_pushButton_NAC_clicked();

private:
    Ui::ScheduleTransport *ui;
};

#endif // SCHEDULETRANSPORT_H
