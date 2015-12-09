/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *countBtn;
    QLabel *areaLabel_2;
    QLineEdit *radiusLineEdit;
    QLabel *radiusLabel;
    QLabel *areaLabel_1;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(545, 156);
        countBtn = new QPushButton(Dialog);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        countBtn->setGeometry(QRect(430, 80, 85, 26));
        areaLabel_2 = new QLabel(Dialog);
        areaLabel_2->setObjectName(QString::fromUtf8("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(300, 80, 61, 16));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(100, 80, 59, 26));
        radiusLabel = new QLabel(Dialog);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setGeometry(QRect(10, 80, 71, 16));
        areaLabel_1 = new QLabel(Dialog);
        areaLabel_1->setObjectName(QString::fromUtf8("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(220, 80, 61, 16));
#ifndef QT_NO_SHORTCUT
        areaLabel_2->setBuddy(radiusLineEdit);
        areaLabel_1->setBuddy(radiusLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        countBtn->setText(QApplication::translate("Dialog", "jisuan", 0, QApplication::UnicodeUTF8));
        areaLabel_2->setText(QString());
        radiusLabel->setText(QApplication::translate("Dialog", "banjing:", 0, QApplication::UnicodeUTF8));
        areaLabel_1->setText(QApplication::translate("Dialog", "mianji:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
