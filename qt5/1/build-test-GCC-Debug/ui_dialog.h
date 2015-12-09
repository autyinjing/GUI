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
    QLabel *radiusLabel;
    QLabel *areaLabel_1;
    QLineEdit *radiusLineEdit;
    QLabel *areaLabel_2;
    QPushButton *countBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        radiusLabel = new QLabel(Dialog);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setGeometry(QRect(40, 150, 75, 16));
        areaLabel_1 = new QLabel(Dialog);
        areaLabel_1->setObjectName(QString::fromUtf8("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(220, 150, 75, 16));
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(80, 150, 113, 26));
        areaLabel_2 = new QLabel(Dialog);
        areaLabel_2->setObjectName(QString::fromUtf8("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(280, 150, 75, 16));
        countBtn = new QPushButton(Dialog);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        countBtn->setGeometry(QRect(260, 230, 99, 26));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        radiusLabel->setText(QApplication::translate("Dialog", "\345\215\212\345\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        areaLabel_1->setText(QApplication::translate("Dialog", "\351\235\242\347\247\257\357\274\232", 0, QApplication::UnicodeUTF8));
        areaLabel_2->setText(QString());
        countBtn->setText(QApplication::translate("Dialog", "\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
