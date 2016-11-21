/*
 * person.h
 *
 *  Created on: Jan 22, 2014
 *      Author: Student
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <qstring.h>
class person {

public:
	friend class hello;
	QString name,dob,ht,wt,add,insur,lice,mobile,bg;
	person *next;
	person();
	person(QString name,QString dob,QString ht,QString wt,QString add,QString insur,QString lice,QString mobile,QString bg);
	virtual ~person();

};

#endif /* PERSON_H_ */
