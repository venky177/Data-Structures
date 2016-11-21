#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    start=end=NULL;
    /*
    QString v="venky",l="yoyoyo",st[3]={"ksdjfbsjdf","skdajfbsdf","sdjfbksjdfbjsd"};
    int a[3]={1,2,3};
    r=result(v,l,st,a,a);
    qDebug() << r.getb(1)+"+"+r.getb(2)+"+"+r.getb(3)+"+"+r.getb(4)+"+"+r.getb(5);
    qDebug() << r.getint(0);//+"+"+r.getint(2)+"+"+r.getint(3);
    qDebug() << r.clac();
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::get()
{
    QString name,roll,s[3];int ints[3],unis[3];
    name=ui->lineEdit->text();
    roll=ui->lineEdit_2->text();
    s[0]=ui->lineEdit_3->text();
    s[1]=ui->lineEdit_4->text();
    s[2]=ui->lineEdit_5->text();
    ints[0]=ui->lineEdit_6->text().toInt();
    ints[1]=ui->lineEdit_7->text().toInt();
    ints[2]=ui->lineEdit_8->text().toInt();
    unis[0]=ui->lineEdit_9->text().toInt();
    unis[1]=ui->lineEdit_10->text().toInt();
    unis[2]=ui->lineEdit_11->text().toInt();

    result *p;


    p=new result(name,roll,s,ints,unis);

    insert(p);
    no++;
    return(p->clac());

}

void MainWindow::insert(result *p){
    result*temp=start;
    if(start==NULL)
    {
        start=p;
        end=p;
     }
    else
    {
        if(start->getb(2)>p->getb(2))
        {
        p->next=start;
        start->pre=p;
        start=p;
        }
        else if(end->getb(2)<p->getb(2))
        {
        end->next=p;
        p->pre=end;
        end=p;
        }
        else
        {
            while(temp->getb(2)<p->getb(2))
            {
                temp=temp->next;
            }
            p->next=temp->next;
            p->pre=temp;
            temp->next->pre=p;
            temp->next=p;
        }
    }
}

void MainWindow::display()
{
    int i=0,j=0;
    ui->tableWidget->clearContents();

    QString v;
    result *temp=start;
    while(temp!=NULL)
    {   if(i==no)break;
         ui->tableWidget->insertRow(i);
         for(j=0;j<11;j++)
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
{
    ui->lineEdit_12->setText(QString::number(get()));


}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_12->clear();

}

result::result():student(),internal(),uni(){
    for(int i=0;i<3;i++)totmarks[i]=0;
    percentage=0;
    dis[0]=this->getb(1);
    dis[1]=this->getb(2);
    dis[2]=this->getb(3);
    dis[3]=this->getb(4);
    dis[4]=this->getb(5);
    dis[5]=QString::number(this->getint(0));
    dis[6]=QString::number(this->getint(1));
    dis[7]=QString::number(this->getint(2));
    dis[8]=QString::number(this->getuni(0));
    dis[9]=QString::number(this->getuni(1));
    dis[10]=QString::number(this->getuni(2));
    dis[11]=QString::number(this->cal());


}

result::result(QString n, QString roll , QString sub[],int m[],int muni[]):student(n,roll,sub),internal(n,roll,sub,m),uni(n,roll,sub,muni){
   for(int i=0;i<3;i++)totmarks[i]=this->getuni(i)+this->getint(i);
    next=pre=NULL;
}

int result::clac()
{float temp=0;
    for(int i=0;i<3;i++)temp+=totmarks[i];
    percentage=temp/3;
return percentage;
}

internal::internal()
{
    for(int i=0;i<3;i++)intmarks[i]=0;
}
internal::internal(QString n, QString roll , QString sub[],int m[]):student(n,roll,sub)
{
    for(int i=0;i<3;i++)intmarks[i]=m[i];
}

int internal::getint(int j)
{
    return this->intmarks[j];
}

uni::uni()
{
    for(int i=0;i<3;i++)unimarks[i]=0;
}
uni::uni(QString n, QString roll , QString sub[],int m[]):student(n,roll,sub)
{
    for(int i=0;i<3;i++)unimarks[i]=m[i];
}

int uni::getuni(int j)
{
    return this->unimarks[j];
}

student::student(){
    name="";
    rollno="";
    for(int i=0;i<3;i++)subjects[i]="";
}
student::student(QString n, QString roll , QString sub[])
{
    name=n;
    rollno=roll;
    for(int i=0;i<3;i++)subjects[i]=sub[i];
}
QString student::getb(int j)
{
    switch(j)
    {
    case 1:
        return this->name;
    case 2:
        return this->rollno;
    case 3:
        return this->subjects[0];
    case 4:
        return this->subjects[1];
    case 5:
        return this->subjects[2];
    }
}



