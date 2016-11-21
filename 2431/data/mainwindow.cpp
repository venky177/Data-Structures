#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
#include "QTableWidget"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    usecopy=0;
    ui->setupUi(this);


}
void MainWindow::inc()
{
    usecopy+=1;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::get()
{
    QString name,lname,ht,wt,add,insur,lice,mobile,bg;
    name=ui->lineEdit->text();
    lname=ui->lineEdit_3->text();
    ht=ui->lineEdit_4->text();
    wt=ui->lineEdit_2->text();
    add=ui->lineEdit_8->text();
    insur=ui->lineEdit_5->text();
    lice=ui->lineEdit_7->text();
    mobile=ui->lineEdit_6->text();
    bg=ui->comboBox->currentText();
    person *p;
    p=new person(name,lname,ht,wt,add,insur,lice,mobile,bg);
    insert(p);
    display();
}

void MainWindow::insert(person *p){
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
}
void MainWindow::search()
{
    QString key=ui->lineEdit_9->text();
    person *temp=start;
    while(temp!=NULL)
    {
        if(temp->getname()==key)
        {//ui->textEdit->setText(temp->getstring());
        break;
        }

        temp=temp->getnext();
    }
}
void MainWindow::display()
{int i=0,j=0;
    person *temp=start;
    ui->tableWidget->insertRow(i);
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("venky"));
    while(temp!=NULL)
    {
        for(j=0;j<9;j++)
        {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,j,new QTableWidgetItem("venky"));

        }
        i++;
        temp=temp->getnext();
    }
}
person* MainWindow::surname()
{
    QString key=ui->lineEdit_2->text();
    person *temp=start;
    while(temp!=NULL)
    {
        if(temp->getsuname()==key)
        {
            return(temp);
        }

        temp=temp->getnext();
    }
}

void MainWindow::on_pushButton_clicked()
{   get();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_7->clear();


}

void MainWindow::on_pushButton_2_clicked()
{
    search();
}



void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked==true)
    {
        ui->lineEdit_8->close();
    }
}
