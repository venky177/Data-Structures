#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "person.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    friend class person;
    static int count;
    person *start,*end,def;
    int usecopy,disp;
    void inc();
    void get();
    void insert(person *p);
    void search();
    void display();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H


