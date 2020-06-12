#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <QDialog>



namespace Ui {
class Locations;
}

class Locations : public QDialog
{
    Q_OBJECT

public:
    explicit Locations(QWidget *parent = nullptr);
    ~Locations();


public slots:
    void on_pushButton_AC_clicked();

    void on_pushButton_NAC_clicked();

    void on_pushButton_Bike_clicked();

    void on_pushButton_Rickshaw_clicked();

    void on_pushButton_Share_clicked();

private:
    Ui::Locations *ui;
};
#endif // LOCATIONS_H
