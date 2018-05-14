#ifndef HELPOPTION_H
#define HELPOPTION_H

#include <QDialog>

namespace Ui {
class helpOption;
}

class helpOption : public QDialog
{
    Q_OBJECT

public:
    explicit helpOption(QWidget *parent = 0);
    ~helpOption();

private:
    Ui::helpOption *ui;
};

#endif // HELPOPTION_H
