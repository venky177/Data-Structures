#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
#include "QTableWidget"
#include "QDebug"
#include "QDate"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    usecopy=0;
    disp=0;
    ui->setupUi(this);
    QDate d;
    d=d.currentDate();
    ui->dateEdit->setDate(d);
    QDate t=ui->dateEdit->date();
    qDebug() << t;
    ui->lineEdit->setValidator(new QRegExpValidator(QRegExp("[A-Z][a-z]+[0-9]")));
    ui->lineEdit_3->setValidator(new QRegExpValidator(QRegExp("[A-Z][a-z]+")));
    ui->lineEdit_2->setValidator(new QRegExpValidator(QRegExp("[0-9]+")));
    ui->lineEdit_4->setValidator(new QRegExpValidator(QRegExp("[0-9]+")));
    ui->lineEdit_5->setValidator(new QRegExpValidator(QRegExp("[0-9]+")));
    ui->lineEdit_6->setValidator(new QRegExpValidator(QRegExp("[0-9]+")));
    ui->lineEdit_7->setValidator(new QRegExpValidator(QRegExp("[0-9]+")));

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
{   QDate d;
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
    d=ui->dateEdit->date();
    person *p;

    p=new person(name,lname,ht,wt,add,insur,lice,mobile,bg,d);

    insert(p);
    usecopy++;

}

void MainWindow::insert(person *p){
    if(start==NULL)
    {
        start=p;
        end=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
}

void MainWindow::display()
{
    int i=0,j=0;
    ui->tableWidget->clearContents();

    QString v;
    person *temp=start;
    while(temp!=NULL)
    {   if(i==usecopy)break;
         ui->tableWidget->insertRow(i);
         for(j=0;j<10;j++)
        {
        v=temp->gets(j);
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(v));
        }
        i++;

        temp=temp->next;
        qDebug() << ui->tableWidget->rowCount();
        for(int k=i;k<ui->tableWidget->rowCount();k++)ui->tableWidget->removeRow(k);
    }

}


void MainWindow::on_pushButton_clicked()
{   get();
    QDate d;
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_7->clear();
    ui->dateEdit->setDate(d.currentDate());


}

void MainWindow::on_pushButton_2_clicked()
{
    display();
}

void MainWindow::on_pushButton_3_clicked()
{   QString d="default";
    QDate D=D.currentDate();
    person v(d,d,d,d,d,d,d,d,d,D);
    def=v;
    person*p=&def;
    insert(p);
    usecopy++;
}
