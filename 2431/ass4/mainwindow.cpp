#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "complex.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->add_res->setReadOnly(true);
    ui->sub_res->setReadOnly(true);
    ui->mul_res->setReadOnly(true);
    ui->div_res->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->c1real->text().isEmpty()||ui->c1img->text().isEmpty()||ui->c2real->text().isEmpty()||ui->c2img->text().isEmpty())
    {
        QMessageBox::critical(this, tr("Error"),"Feilds cannot be left blank");

    }
    else
    {

        complex c1(ui->c1real->text().toFloat(),ui->c1img->text().toFloat()),c2(ui->c2real->text().toFloat(),ui->c2img->text().toFloat());
        complex add_res,sub_res,mul_res,div_res;
        add_res=c1+c2;
        sub_res=c1-c2;
        mul_res=c1*c2;
        div_res=c1/c2;
        ui->add_res->setText(QString::number(add_res.getReal())+"+"+QString::number(add_res.getImg())+"i");
        ui->sub_res->setText(QString::number(sub_res.getReal())+"+"+QString::number(sub_res.getImg())+"i");
        ui->mul_res->setText(QString::number(mul_res.getReal())+"+"+QString::number(sub_res.getImg())+"i");
        ui->div_res->setText(QString::number(div_res.getReal())+"+"+QString::number(div_res.getImg())+"i");
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->c1img->clear();
    ui->c1real->clear();
    ui->c2img->clear();
    ui->c2real->clear();
    ui->add_res->clear();
    ui->sub_res->clear();
    ui->div_res->clear();
    ui->mul_res->clear();
}
