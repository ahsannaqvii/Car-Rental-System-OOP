#ifndef DRIVER2_H
#define DRIVER2_H

#include <QDialog>

namespace Ui {
class Driver2;
}

class Driver2 : public QDialog
{
    Q_OBJECT

public:
    explicit Driver2(QWidget *parent = nullptr);
    ~Driver2();

public slots:
    void on_pushButton_Login_clicked();

private:
    Ui::Driver2 *ui;
};

#endif // DRIVER2_H
