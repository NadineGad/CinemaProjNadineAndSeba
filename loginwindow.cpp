#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWIndow::LoginWIndow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWIndow)
{
    ui->setupUi(this);
    ui->labelError->setVisible(false);

}

LoginWIndow::~LoginWIndow()
{
    delete ui;
}

void LoginWIndow::on_pushButtonLogin_clicked()
{

}


void LoginWIndow::on_pushButton_2_clicked()
{

}

