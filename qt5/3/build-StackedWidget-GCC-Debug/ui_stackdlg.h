/********************************************************************************
** Form generated from reading UI file 'stackdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKDLG_H
#define UI_STACKDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_StackDlg
{
public:

    void setupUi(QDialog *StackDlg)
    {
        if (StackDlg->objectName().isEmpty())
            StackDlg->setObjectName(QString::fromUtf8("StackDlg"));
        StackDlg->resize(400, 300);

        retranslateUi(StackDlg);

        QMetaObject::connectSlotsByName(StackDlg);
    } // setupUi

    void retranslateUi(QDialog *StackDlg)
    {
        StackDlg->setWindowTitle(QApplication::translate("StackDlg", "StackDlg", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StackDlg: public Ui_StackDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKDLG_H
