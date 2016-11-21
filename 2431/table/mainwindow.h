#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class student
{
    QString name,subjects[3],rollno;
public:
    student();
    student(QString,QString,QString[]);
    QString getb(int);
};
class internal:virtual public student{
    int intmarks[3];
public:
    internal();
    internal(QString,QString,QString[],int[]);
    int getint(int);
};
class uni:virtual public student{
    int unimarks[3];
public:
    uni();
    uni(QString,QString,QString[],int []);
    int getuni(int);
};

class result:public internal,public uni{
    int totmarks[3],percentage;
    QString dis[12];

public:
    result* next,*pre;
    result();
    result(QString,QString,QString[],int [],int[]);
    int clac();
    QString gets(int);
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int no;
    result *start,*end;
    int get();
    void insert(result *p);
    void search();
    void display();
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
