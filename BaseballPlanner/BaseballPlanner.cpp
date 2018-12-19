#include "BaseballPlanner.h"
#include "ui_BaseballPlanner.h"

BaseballPlanner::BaseballPlanner(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseballPlanner)
{
    ui->setupUi(this);

    QPixmap map(":/src/img/Stadium-NonDirected.jpg");
    int width = ui->label_Map->width();
    int height = ui->label_Map->height();
    ui->label_Map->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));
}

BaseballPlanner::~BaseballPlanner()
{
    delete ui;
}

void BaseballPlanner::on_lineEdit_Password_returnPressed()
{
    QString username = ui->lineEdit_Username->text();   // Admin or User lineEdit
    QString password = ui->lineEdit_Password->text();   // Password lineEdit

    // PROCESS: If else statements to log into admin form class or user form class
    if(username == "admin" && password == "1")
    {
        admin = new AdminDialog(this);
        admin->setModal(true);
        admin->exec();
    }
    else if(username == "user" && password == "1")
    {
        user = new UserDialog(this);
        user->setModal(true);
        user->exec();
    }

    // PROCESS: Handles incorrect password or username
    else if((password == "1") && (username != "admin" || username != "user"))
        QMessageBox::warning(this, "Login","Incorrect name. Please try again.");
    else
        QMessageBox::warning(this, "Login","Incorrect password. Please try again.");

    // PROCESS: Clear the user entry
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
}

void BaseballPlanner::on_pushButton_Login_clicked()
{
    on_lineEdit_Password_returnPressed();
}

void BaseballPlanner::on_pushButton_Exit_clicked()
{
    close();
}
