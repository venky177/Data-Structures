#include "person.h"

person::person() {
    // TODO Auto-generated constructor stub
    this->name="";
    this->add="";
    this->bg="";
    this->lname="";
    this->ht="";
    this->insur="";
    this->lice="";
    this->mobile="";
    this->wt=wt;
    this->next=NULL;
}

person::person(QString name,QString lname,QString ht,QString wt,QString add,QString insur,QString lice,QString mobile,QString bg,QDate d)
    {
        this->name=this->name+name;
        this->add=this->add+add;
        this->bg=this->bg+bg;
        this->lname=this->lname+lname;
        this->ht=this->ht+ht;
        this->insur=this->insur+insur;
        this->lice=this->lice+lice;
        this->mobile=this->mobile+mobile;
        this->wt=this->wt+wt;
        this->next=NULL;
        this->d=d;
    }

person::~person() {
    // TODO Auto-generated destructor stub
}
person::person(person &p)
{
    this->add=p.add;
}

QString person::getstring()
{
    return(this->name+"\n"+this->lname+"\n"+this->ht+"\n"+this->wt+" \n"+this->add+" \n"+this->insur+" \n"+this->lice+" \n"+this->mobile+" \n"+this->bg+" \n");
}
person *person::getnext()
{
    return(this->next);
}
QString person::gets(int v)
{
    switch(v)
    {
    case 0:return(this->name);
    break;
    case 1:return(this->lname);
    break;
    case 2:return(this->d.toString("dd/MM/yyyy"));
    break;
    case 3:return(this->ht);
    break;
    case 4:return(this->wt);
    break;
    case 5:return(this->add);
    break;
    case 6:return(this->bg);
    break;
    case 7:return(this->lice);
    break;
    case 8:return(this->mobile);
    break;
    case 9:return(this->insur);
    break;
    }

}

