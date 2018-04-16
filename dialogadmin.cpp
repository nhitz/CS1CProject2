#include "dialogadmin.h"
#include "ui_dialogadmin.h"
#include "adminpage.h"
#include "ui_adminpage.h"

DialogAdmin::DialogAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdmin)
{
    ui->setupUi(this);
}

DialogAdmin::~DialogAdmin()
{
    delete ui;
}

void DialogAdmin::on_AdminLoginButton_clicked()
{
    QString username = ui ->AdminUsernameEdit->text();
    QString password = ui ->AdminPasswordEdit->text();

    ui->AdminUsernameEdit->setText(username);
    ui->AdminPasswordEdit->setText(password);

    if(username != "Admin" || password != "Admin") {

       // QMessageBox::about(this, "Invalid Username and/or Password," "Invalid username and/or password");
        ui->AdminUsernameEdit->clear();
        ui->AdminPasswordEdit->clear();
        QString username = ui ->AdminUsernameEdit->text();
        QString password = ui ->AdminPasswordEdit->text();
        ui->AdminUsernameEdit->setText(username);
        ui->AdminPasswordEdit->setText(password);
    }

    else {

        AdminPage anAdmin;

        anAdmin.setModal(true);
        anAdmin.exec();

    }
}
