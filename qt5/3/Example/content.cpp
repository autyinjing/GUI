#include "content.h"
#include <QHBoxLayout>

Content::Content() : QFrame(parent)
{
    stack = new QStackedWidget(this);

    stack->setFrameStyle(QFrame::Panel | QFrame::Raised);

    //Insert three pages
    baseInfo = new BaseInfo();
    contact = new Contact();
    detail = new Detail();

    stack->addWidget(baseInfo);
    stack->addWidget(contact);
    stack->addWidget(detail);

    //Create two pushbutton
    AmendBtn = new QPushButton(tr("modify"));
    CloseBtn = new QPushButton(tr("close"));
    QHBoxLayout *BtnLayout = new QHBoxLayout;
    BtnLayout->addStretch(1);
    BtnLayout->addWidget(AmendBtn);
    BtnLayout->addWidget(CloseBtn);

    //Layout all
    QVBoxLayout *RightLayout = new QVBoxLayout(this);
    RightLayout->setMargin(10);
    RightLayout->setSpacing(6);
    RightLayout->addWidget(stack);
    RightLayout->addLayout(BtnLayout);
}
