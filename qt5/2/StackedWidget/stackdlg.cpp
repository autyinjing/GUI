#include "stackdlg.h"
#include <QHBoxLayout>

StackDlg::StackDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("堆栈窗体"));
    list = new QListWidget(this);   //新建一个QlistWidget控件对象

    //插入条目
    list->insertItem(0, tr("窗口1"));
    list->insertItem(1, tr("窗口2"));
    list->insertItem(2, tr("窗口3"));

    //创建三个标签作为窗体
    label1 = new QLabel(tr("窗口测试1"));
    label2 = new QLabel(tr("窗口测试2"));
    label3 = new QLabel(tr("窗口测试3"));

    //插入堆栈窗体
    stack = new QStackedWidget(this);
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);

    //布局
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(list);
    mainLayout->addWidget(stack, 0, Qt::AlignHCenter);
    mainLayout->setStretchFactor(list, 1);
    mainLayout->setStretchFactor(stack, 3);

    connect(list, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));
}

StackDlg::~StackDlg()
{

}
