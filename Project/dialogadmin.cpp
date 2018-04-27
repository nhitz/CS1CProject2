#include "dialogadmin.h"
#include "ui_dialogadmin.h"
#include "adminwindow.h"

DialogAdmin::DialogAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdmin)
{
    ui->setupUi(this);

    if(!dbManager::instance().isOpen())
    {
        ui->statusLabel->setText("Failed to connect to database");
    }
    else
    {
        ui->statusLabel->setText("Enter credentials");
    }
}

DialogAdmin::~DialogAdmin()
{
    delete ui;
}

void DialogAdmin::on_AdminLoginButton_clicked()
{
    adminwindow adminWin;

    if(dbManager::instance().validateAdmin(ui->AdminUsernameEdit->text(), ui->AdminPasswordEdit->text()))
    {
        ui->statusLabel->setText("Login accepted");
        adminWin.setModal(true);
        adminWin.exec();
    }
    else
        ui->statusLabel->setText("Invalid username or password");
}
