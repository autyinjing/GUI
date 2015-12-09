#include "stackdlg.h"
#include <QHBoxLayout>

StackDlg::StackDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("StackedWidget"));

    list = new QListWidget(this);
    //插入条目
    list->insertItem(0, tr("Window1"));
    list->insertItem(1,tr("Window2"));
    list->insertItem(2,tr("Window3"));

    //创建标签
    label1 = new QLabel(tr("WindowTest1"));
    label2 = new QLabel(tr("WindowTest2"));
    label3 = new QLabel(tr("WindowTest3"));

    //创建堆栈窗体
    stack = new QStackedWidget(this);
    //插入标签
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);

    //创建布局
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    //设置并插入部件
    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(list);
    mainLayout->addWidget(stack, 0, Qt::AlignHCenter);
    mainLayout->setStretchFactor(list, 1);
    mainLayout->setStretchFactor(stack, 3);

    //连接
    connect(list, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));
}

StackDlg::~StackDlg()
{

}
