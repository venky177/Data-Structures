#ifndef PERSON_H_
#define PERSON_H_
#include <qstring.h>
class person {


public:
person *next;

QString name,lname,ht,wt,add,insur,lice,mobile,bg;
friend class mainwindow;
    person();
    person(QString name,QString lname,QString ht,QString wt,QString add,QString insur,QString lice,QString mobile,QString bg);
    person(person &p);
    QString getstring();
    QString getname();
    QString getsuname();
    QString gets();
    person *getnext();
    virtual ~person();

};

#endif /* PERSON_H_ */
