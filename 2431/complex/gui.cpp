#include "gui.h"
#include "complex.h"


gui::gui(QWidget *parent) :
    QWidget(parent)
{
    //this->setWindowOpacity();
    butadd=new QPushButton("ADD",this);
    butsub=new QPushButton("SUBTRACT",this);
    butmul=new QPushButton("MULTIPLY",this);
    butdiv=new QPushButton("DIVIDE",this);
    butclear=new QPushButton("CLEAR",this);

    labreal=new QLabel("Real",this);
    labimg=new QLabel("Imaginary",this);
    labc1=new QLabel("C1",this);
    labc2=new QLabel("C2",this);
    labresult=new QLabel("Result",this);

    lc1r=new QLineEdit(this);
    lc1i=new QLineEdit(this);
    lc2r=new QLineEdit(this);
    lc2i=new QLineEdit(this);
    lresult=new QLineEdit(this);
    lresult->setReadOnly(true);

    hb1=new QHBoxLayout;
    hb2=new QHBoxLayout;
    hblabels=new QHBoxLayout;
    hbbuttons=new QHBoxLayout;
    hbresult=new QHBoxLayout;
    vb=new QVBoxLayout;

    hblabels->setSpacing(20);
    hblabels->addStretch(1);
    hblabels->addSpacing(50);
    hblabels->addWidget(labreal);
    hblabels->addSpacing(100);
    hblabels->addWidget(labimg);
    hblabels->addStretch(1);

    hb1->setSpacing(10);
    hb1->addStretch(1);
    hb1->addWidget(labc1);
    hb1->addWidget(lc1r);
    hb1->addWidget(lc1i);
    hb1->addStretch(1);

    hb2->setSpacing(10);
    hb2->addStretch(1);
    hb2->addWidget(labc2);
    hb2->addWidget(lc2r);
    hb2->addWidget(lc2i);
    hb2->addStretch(1);

    hbbuttons->setSpacing(10);
    hbbuttons->addStretch(1);
    hbbuttons->addWidget(butadd);
    hbbuttons->addWidget(butsub);
    hbbuttons->addWidget(butmul);
    hbbuttons->addWidget(butdiv);
    hbbuttons->addStretch(1);

    hbresult->setSpacing(10);
    hbresult->addStretch(1);
    hbresult->addWidget(labresult);
    hbresult->addWidget(lresult);
    hbresult->addStretch(1);


    vb->setSpacing(10);
    vb->addStretch(1);
    vb->addLayout(hblabels);
    vb->addLayout(hb1);
    vb->addLayout(hb2);
    vb->addLayout(hbbuttons);
    vb->addLayout(hbresult);
    vb->addWidget(butclear);
    vb->addStretch(1);

    lc1i->setValidator(new QRegExpValidator(QRegExp("[0-9]{1,9}[.]{0,1}[0-9]{1,4}")));
    lc1r->setValidator(new QRegExpValidator(QRegExp("[0-9]{1,9}[.]{0,1}[0-9]{1,4}")));
    lc2r->setValidator(new QRegExpValidator(QRegExp("[0-9]{1,9}[.]{0,1}[0-9]{1,4}")));
    lc2r->setValidator(new QRegExpValidator(QRegExp("[0-9]{1,9}[.]{0,1}[0-9]{1,4}")));

    setLayout(vb);

    connect(butadd,SIGNAL(clicked()),this,SLOT(onAdd()));
    connect(butsub,SIGNAL(clicked()),this,SLOT(onSubtract()));
    connect(butmul,SIGNAL(clicked()),this,SLOT(onMultiply()));
    connect(butdiv,SIGNAL(clicked()),this,SLOT(onDivide()));
    connect(butclear,SIGNAL(clicked()),this,SLOT(onClear()));
}
void gui::onAdd(){
    c1.real=lc1r->text().toDouble();
    c1.img=lc1i->text().toDouble();

    c2.real=lc2r->text().toDouble();
    c2.img=lc2i->text().toDouble();

    c1 =c1 + c2;
    lresult->setText(QString::number(c1.real)+"+("+QString::number(c1.img)+")i");

}

void gui::onSubtract(){
    c1.real=lc1r->text().toDouble();
    c1.img=lc1i->text().toDouble();

    c2.real=lc2r->text().toDouble();
    c2.img=lc2i->text().toDouble();

    c1 =c1- c2;
    lresult->setText(QString::number(c1.real)+"+("+QString::number(c1.img)+")i");

}

void gui::onMultiply()
{


    c1.real=lc1r->text().toDouble();
    c1.img=lc1i->text().toDouble();

    c2.real=lc2r->text().toDouble();
    c2.img=lc2i->text().toDouble();

    c1 =c1* c2;
    lresult->setText(QString::number(c1.real)+"+("+QString::number(c1.img)+")i");
}

void gui::onDivide()
{
    c1.real=lc1r->text().toDouble();
    c1.img=lc1i->text().toDouble();

    c2.real=lc2r->text().toDouble();
    c2.img=lc2i->text().toDouble();

    c1 =c1 / c2;
    lresult->setText(QString::number(c1.real)+"+(" +QString::number(c1.img)+")i");
}

void gui::onClear()
{
   lc1i->clear();
   lc1r->clear();
   lc2i->clear();
   lc2r->clear();
   lresult->clear();
}
