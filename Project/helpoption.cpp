#include "helpoption.h"
#include "ui_helpoption.h"

helpOption::helpOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpOption)
{
    ui->setupUi(this);
}

helpOption::~helpOption()
{
    delete ui;
}
