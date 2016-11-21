#ifndef PERSON_H_
#define PERSON_H_
#include <qstring.h>
#include "QDate"
class person {

QString name,lname,ht,wt,insur,lice,mobile,bg;
QDate d;
public:
person *next;
QString add;

friend class mainwindow;
    person();
    person(QString name,QString lname,QString ht,QString wt,QString add,QString insur,QString lice,QString mobile,QString bg,QDate d);
    person(person &p);
    QString getstring();
    QString getname();
    QString getsuname();
    QString gets(int);
    person *getnext();
    virtual ~person();

};

#endif /* PERSON_H_ */
