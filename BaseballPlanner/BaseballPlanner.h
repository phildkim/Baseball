#ifndef BASEBALLPLANNER_H
#define BASEBALLPLANNER_H
#include <QMainWindow>
#include "AdminDialog.h"
#include "UserDialog.h"


namespace Ui {
class BaseballPlanner;
}
class BaseballPlanner : public QMainWindow
{
    Q_OBJECT
public:
    explicit BaseballPlanner(QWidget *parent = 0);
    ~BaseballPlanner();
private slots:
    void on_lineEdit_Password_returnPressed();
    void on_pushButton_Login_clicked();
    void on_pushButton_Exit_clicked();

private:
    Ui::BaseballPlanner *ui;
    AdminDialog *admin;
    UserDialog *user;
};

#endif // BASEBALLPLANNER_H
