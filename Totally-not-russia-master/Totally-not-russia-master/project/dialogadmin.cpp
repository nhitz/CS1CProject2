#include "dialogadmin.h"
#include "ui_dialogadmin.h"

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
