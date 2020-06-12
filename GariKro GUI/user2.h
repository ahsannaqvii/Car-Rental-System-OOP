#ifndef USER2_H
#define USER2_H

#include <QDialog>


namespace Ui {
class User2;
}

class User2 : public QDialog
{
    Q_OBJECT

public:
    explicit User2(QWidget *parent = nullptr);
    ~User2();
                              //aggay kaam aega

public slots:
    void on_pushButton_Login_clicked();

private:
    Ui::User2 *ui;
};

#endif // USER2_H
