#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    datelabel->setText(datetime->date().toString());
    datelabel->show();
}

Widget::~Widget()
{

}
