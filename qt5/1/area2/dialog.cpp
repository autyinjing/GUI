#include "dialog.h"
#include <QGridLayout>

const static double PI = 3.1416;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    //Label of input radius
    label1 = new QLabel(this);
    label1->setText(tr("Input the radius: "));

    //lineEdit and label
    lineEdit = new QLineEdit(this);
    label2 = new QLabel(this);
    button = new QPushButton(this);
    button->setText(tr("Get area"));

    //Layout
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label1, 0, 0);
    mainLayout->addWidget(lineEdit, 0, 1);
    mainLayout->addWidget(label2, 1, 0);
    mainLayout->addWidget(button, 1, 1);

    //connect the signal and slot
    //connect(button, SIGNAL(clicked()), this, SLOT(showArea()));
    connect(lineEdit, SIGNAL(textChanged(QString)), this, SLOT(showArea()));
}

void Dialog::showArea()
{
    bool ok;
    QString     tempStr;
    QString     valueStr = lineEdit->text();

    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * PI;
    label2->setText(tempStr.setNum(area));
}

Dialog::~Dialog()
{

}
