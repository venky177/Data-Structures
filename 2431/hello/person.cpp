/*
 * person.cpp
 *
 *  Created on: Jan 22, 2014
 *      Author: Student
 */

#include "person.h"

person::person() {
	// TODO Auto-generated constructor stub
next=NULL;
}

person::person(QString name,QString dob,QString ht,QString wt,QString add,QString insur,QString lice,QString mobile,QString bg)
    {
        this->name=name;
        this->add=add;
        this->bg=bg;
        this->dob=dob;
        this->ht=ht;
        this->insur=insur;
        this->lice=lice;
        this->mobile=mobile;
        this->wt=wt;
        next=NULL;
    }

person::~person() {
	// TODO Auto-generated destructor stub
}

