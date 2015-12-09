#include "testui.h"
#include "ui_testui.h"

testui::testui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testui)
{
    ui->setupUi(this);
}

testui::~testui()
{
    delete ui;
}
