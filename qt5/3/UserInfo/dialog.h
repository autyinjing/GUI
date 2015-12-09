#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QFrame>
#include <QPixmap>
#include <QHBoxLayout>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    /* ----- Left ----- */
    //Label
    QLabel  *UserNameLabel;
    QLabel  *NameLabel;
    QLabel  *SexLabel;
    QLabel  *DepartmentLabel;
    QLabel  *AgeLabel;
    QLabel  *OtherLabel;

    //LineEdit
    QLineEdit   *UserNameLineEdit;
    QLineEdit   *NameLineEdit;
    QLineEdit   *AgeLineEdit;

    //Other
    QComboBox   *SexComboBox;
    QTextEdit   *DepartmentTextEdit;
    QGridLayout *LeftLayout;

    /* ----- Right ----- */
    //Label
    QLabel  *HeadLabel;
    QLabel  *HeadIconLabel;
    QLabel  *IntroductionLabel;

    //Other
    QPushButton     *UpdateHeadBtn;
    QHBoxLayout     *TopRightLayout;
    QTextEdit       *IntroductionTextEdit;
    QVBoxLayout     *RightLayout;

    /* ----- Bottom ----- */
    QPushButton     *OkBtn;
    QPushButton     *CancelBtn;
    QHBoxLayout     *BottomLayout;
};

#endif // DIALOG_H
