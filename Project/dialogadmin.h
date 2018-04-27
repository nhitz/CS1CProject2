#ifndef DIALOGADMIN_H
#define DIALOGADMIN_H

#include <QDialog>
#include <dbmanager.h>

namespace Ui {
class DialogAdmin;
}

class DialogAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdmin(QWidget *parent = 0);
    ~DialogAdmin();

private slots:
    void on_AdminLoginButton_clicked();

private:
    Ui::DialogAdmin *ui;
};

#endif // DIALOGADMIN_H
