#ifndef LOGSIGNFORM_H
#define LOGSIGNFORM_H

#include <QDialog>

namespace Ui {
class LogSignForm;
}

class LogSignForm : public QDialog
{
    Q_OBJECT

public:
    explicit LogSignForm(QWidget *parent = nullptr);
    ~LogSignForm();

public slots:

    void on_pushButton_Login1_clicked();

private:
    Ui::LogSignForm *ui;
};

#endif // LOGSIGNFORM_H
