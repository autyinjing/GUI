#ifndef TESTUI_H
#define TESTUI_H

#include <QDialog>

namespace Ui {
class testui;
}

class testui : public QDialog
{
    Q_OBJECT

public:
    explicit testui(QWidget *parent = 0);
    ~testui();

private:
    Ui::testui *ui;
};

#endif // TESTUI_H
