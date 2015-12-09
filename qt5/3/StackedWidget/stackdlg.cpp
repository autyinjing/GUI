#include "stackdlg.h"
#include "ui_stackdlg.h"
#include <QHBoxLayout>

StackDlg::StackDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StackDlg)
{
    ui->setupUi(this);


    //Create Title
    setWindowTitle(tr("StackedWidget"));
    list = new QListWidget(this);

    //插入项目
    list->insertItem(0, tr("窗口1"));
    list->insertItem(1, tr("窗口2"));
    list->insertItem(2, tr("窗口3"));

    //Create Label
    label1 = new QLabel(tr("测试窗口1"));
    label2 = new QLabel(tr("测试窗口2"));
    label3 = new QLabel(tr("测试窗口3"));
    stack = new QStackedWidget(this);

    //Insert label into StackedWidget
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    //Layout
    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(list);
    mainLayout->addWidget(stack, 0, Qt::AlignCenter);
    mainLayout->setStretchFactor(list, 1);
    mainLayout->setStretchFactor(stack, 3);

    //Connect signals and slots
    connect(list, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));
}

StackDlg::~StackDlg()
{
    delete ui;
}
