#ifndef STACKDLG_H
#define STACKDLG_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

namespace Ui {
class StackDlg;
}

class StackDlg : public QDialog
{
    Q_OBJECT

public:
    explicit StackDlg(QWidget *parent = 0);
    ~StackDlg();

private:
    QListWidget *list;
    QStackedWidget *stack;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;

private:
    Ui::StackDlg *ui;
};

#endif // STACKDLG_H
