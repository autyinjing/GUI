/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *managerPage;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page;
    QLabel *Label1;
    QComboBox *sellFactoryComboBox;
    QLabel *label_3;
    QComboBox *sellBrandComboBox;
    QLabel *label_4;
    QLineEdit *PriceLineEdit;
    QLabel *label_5;
    QSpinBox *SellNumSpinBox;
    QPushButton *sellOkBtn;
    QPushButton *sellCancelBtn;
    QLabel *label_6;
    QLineEdit *sellSumLineEdit;
    QLabel *label_7;
    QLabel *sellLastNumLabel;
    QLabel *label_9;
    QWidget *page_3;
    QListWidget *dailyList;
    QWidget *page_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(700, 410);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 700, 410));
        managerPage = new QWidget();
        managerPage->setObjectName(QString::fromUtf8("managerPage"));
        label = new QLabel(managerPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 671, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        toolBox = new QToolBox(managerPage);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 40, 351, 351));
        toolBox->setFrameShape(QFrame::WinPanel);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 347, 287));
        Label1 = new QLabel(page);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setGeometry(QRect(10, 10, 75, 16));
        sellFactoryComboBox = new QComboBox(page);
        sellFactoryComboBox->setObjectName(QString::fromUtf8("sellFactoryComboBox"));
        sellFactoryComboBox->setGeometry(QRect(80, 10, 85, 26));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 16));
        sellBrandComboBox = new QComboBox(page);
        sellBrandComboBox->setObjectName(QString::fromUtf8("sellBrandComboBox"));
        sellBrandComboBox->setGeometry(QRect(80, 50, 85, 26));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 61, 16));
        PriceLineEdit = new QLineEdit(page);
        PriceLineEdit->setObjectName(QString::fromUtf8("PriceLineEdit"));
        PriceLineEdit->setGeometry(QRect(80, 90, 113, 26));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 140, 41, 16));
        SellNumSpinBox = new QSpinBox(page);
        SellNumSpinBox->setObjectName(QString::fromUtf8("SellNumSpinBox"));
        SellNumSpinBox->setGeometry(QRect(80, 130, 53, 26));
        sellOkBtn = new QPushButton(page);
        sellOkBtn->setObjectName(QString::fromUtf8("sellOkBtn"));
        sellOkBtn->setGeometry(QRect(40, 240, 99, 26));
        sellCancelBtn = new QPushButton(page);
        sellCancelBtn->setObjectName(QString::fromUtf8("sellCancelBtn"));
        sellCancelBtn->setGeometry(QRect(190, 240, 99, 26));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 180, 51, 16));
        sellSumLineEdit = new QLineEdit(page);
        sellSumLineEdit->setObjectName(QString::fromUtf8("sellSumLineEdit"));
        sellSumLineEdit->setGeometry(QRect(80, 170, 113, 26));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 100, 31, 16));
        sellLastNumLabel = new QLabel(page);
        sellLastNumLabel->setObjectName(QString::fromUtf8("sellLastNumLabel"));
        sellLastNumLabel->setGeometry(QRect(150, 140, 75, 16));
        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 180, 31, 16));
        toolBox->addItem(page, QString::fromUtf8("sale car"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 347, 287));
        toolBox->addItem(page_3, QString::fromUtf8("Page 2"));
        dailyList = new QListWidget(managerPage);
        dailyList->setObjectName(QString::fromUtf8("dailyList"));
        dailyList->setGeometry(QRect(370, 40, 321, 351));
        stackedWidget->addWidget(managerPage);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Widget);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Car sale system", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Car manage", 0, QApplication::UnicodeUTF8));
        Label1->setText(QApplication::translate("Widget", "Factory:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Brand:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "Price:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "Num:", 0, QApplication::UnicodeUTF8));
        sellOkBtn->setText(QApplication::translate("Widget", "Ok", 0, QApplication::UnicodeUTF8));
        sellCancelBtn->setText(QApplication::translate("Widget", "Cancel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "Sum:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "wan", 0, QApplication::UnicodeUTF8));
        sellLastNumLabel->setText(QApplication::translate("Widget", "LastNum", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Widget", "wan", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Widget", "sale car", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Widget", "Page 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
