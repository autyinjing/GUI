#include "dialog.h"
#include <QLabel>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    //Set Title
    setWindowTitle(tr("UserInfo"));

    //Left
    UserNameLabel = new QLabel(tr("username: "));
    UserNameLineEdit = new QLineEdit;
    NameLabel = new QLabel(tr("name: "));
    NameLineEdit = new QLineEdit;
    SexLabel = new QLabel(tr("sex: "));
    SexComboBox = new QComboBox;

    SexComboBox->addItem(tr("male"));
    SexComboBox->addItem(tr("female"));
    DepartmentLabel = new QLabel(tr("depart: "));
    DepartmentTextEdit = new QTextEdit;
    AgeLabel = new QLabel(tr("age: "));
    AgeLineEdit = new QLineEdit;
    OtherLabel = new QLabel(tr("other: "));
    OtherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    LeftLayout = new QGridLayout();

    //Add widget to layout
    LeftLayout->addWidget(UserNameLabel, 0, 0);
    LeftLayout->addWidget(UserNameLineEdit, 0, 1);
    LeftLayout->addWidget(NameLabel, 1, 0);
    LeftLayout->addWidget(NameLineEdit, 1, 1);
    LeftLayout->addWidget(SexLabel, 2, 0);
    LeftLayout->addWidget(SexComboBox, 2, 1);
    LeftLayout->addWidget(DepartmentLabel, 3, 0);
    LeftLayout->addWidget(DepartmentTextEdit, 3, 1);
    LeftLayout->addWidget(AgeLabel, 4, 0);
    LeftLayout->addWidget(AgeLineEdit, 4, 1);
    LeftLayout->addWidget(OtherLabel, 5, 0, 1, 2);
    LeftLayout->setColumnStretch(0, 1);
    LeftLayout->setColumnStretch(1, 3);

    //Right
    HeadLabel = new QLabel(tr("Head: "));
    HeadIconLabel = new QLabel;
    QPixmap icon("312.png");
    HeadIconLabel->setPixmap(icon);
    HeadIconLabel->resize(icon.width(), icon.height());
    UpdateHeadBtn = new QPushButton(tr("update"));

    //Layout TopRight
    TopRightLayout = new QHBoxLayout();
    TopRightLayout->setSpacing(20);
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadIconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);
    IntroductionLabel = new QLabel(tr("Personal: "));
    IntroductionTextEdit = new QTextEdit;

    //Layout Right
    RightLayout = new QVBoxLayout();
    RightLayout->setMargin(10);
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);

    //Bottom
    OkBtn = new QPushButton(tr("Ok"));
    CancelBtn = new QPushButton(tr("Cancel"));

    BottomLayout = new QHBoxLayout();
    BottomLayout->addStretch();
    BottomLayout->addWidget(OkBtn);
    BottomLayout->addWidget(CancelBtn);

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(LeftLayout, 0, 0);
    mainLayout->addLayout(RightLayout, 0, 1);
    mainLayout->addLayout(BottomLayout, 1, 0, 1, 2);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}

Dialog::~Dialog()
{

}
