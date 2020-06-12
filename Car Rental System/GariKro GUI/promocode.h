#ifndef PROMOCODE_H
#define PROMOCODE_H

#include <QDialog>

namespace Ui {
class Promocode;
}

class Promocode : public QDialog
{
    Q_OBJECT

public:
    explicit Promocode(QWidget *parent = nullptr);
    ~Promocode();

    int tempDiscount;

public slots:

       void on_pushButton_Yes_clicked();

private slots:
       void on_pushButton_No_clicked();

private:
    Ui::Promocode *ui;
};

#endif // PROMOCODE_H
