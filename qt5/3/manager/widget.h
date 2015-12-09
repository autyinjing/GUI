#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>
#include <QMenuBar>

namespace Ui {
class Widget;
}

//终于可以输入中文了我擦
class Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //菜单
    //Menu
    QMenu 	*manageMenu;
    QMenu 	*passwordMenu;

    //Action
    QAction *manageAction;
    QAction *chartAction;
    QAction *quitAction;

private slots:
    void on_manageMenu_clicked();
    void on_chartMenu_clicked();
    void on_quitMenu_clicked();
    void on_sellCancelBtn_clicked();

private:
    Ui::Widget *ui;
    void createMenuBar();
    void on_sellFactoryComboBox_currentIndexChanged(const QString &arg1);
};

#endif // WIDGET_H
