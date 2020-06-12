#ifndef USERDISPLAYDETAILS_H
#define USERDISPLAYDETAILS_H

#include <QDialog>

namespace Ui {
class UserDisplayDetails;
}

class UserDisplayDetails : public QDialog
{
    Q_OBJECT

public:
    explicit UserDisplayDetails(QWidget *parent = nullptr);
    ~UserDisplayDetails();

public slots:

    void on_pushButton_OK_clicked();

    void on_pushButton_Search_clicked();

private:
    Ui::UserDisplayDetails *ui;
};

#endif // USERDISPLAYDETAILS_H
