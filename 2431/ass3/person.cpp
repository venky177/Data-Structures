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

person::person(QString name,QString lname,QString ht,QString wt,QString add,QString insur,QString lice,QString mobile,QString bg)
    {
        this->name=this->name+name;
        this->add=this->add+add;
        this->bg=this->bg+bg;
        this->lname=this->lname+lname;
        this->ht=this->ht+ht;
        this->insur=this->insur+insur;
        this->lice=this->lice+lice;
        this->mobile=this->mobile+mobile;
        this->wt=this->bg+wt;
        this->next=NULL;
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
QString person::getname()
{
    return(this->name);
}
QString person::getsuname()
{
    return(this->lname);
}
person *person::getnext()
{
    return(this->next);
}
