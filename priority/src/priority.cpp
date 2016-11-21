//============================================================================
// Name        : priority.cpp
// Author      : Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node
{	public:
	int data;
	string name;
	node *next,*pre;
	node(string n,int d)
	{	name=n;
		data=d;
		next=pre=NULL;
	}
};
class priority
{
public:
	node *start;
	node *end;
	priority()
	{
		start=end=NULL;
	}
	void insert(string n,int d);
	void display();
	int pop();
	void push(string n,int d);
	void store(priority q);
};

void priority::insert(string n,int d)
{	node*temp=start;
	node*p=new node(n,d);
	if(start==NULL)
	{
		start=end=p;
	}
	else if(start->data>d)
	{
		p->next=start;
		start->pre=p;
		start=p;
	}
	else if(end->data<d)
	{
		end->next=p;
		p->pre=end;
		end=p;
	}
	else
	{
		while(temp!=end && temp->data<d)
		{
			temp=temp->next;
		}
	temp->pre->next=p;
	p->pre=temp->pre;
	p->next=temp;
	temp->pre=p;
	}
}

void priority::store(priority q)
{
	priority q1,q2,q3;
	node*temp=q.start;
	while(temp!=NULL)
	{
	if(temp->data<=30)q1.insert(temp->name,temp->data);
	else if(temp->data<=60)q2.insert(temp->name,temp->data);
	else q3.insert(temp->name,temp->data);
	temp=temp->next;
	}
	cout<<"first shelf"<<endl;
	q1.display();
	cout<<endl;
	cout<<"second shelf"<<endl;
	q2.display();
	cout<<endl;
	cout<<"third shelf"<<endl;
	q3.display();
	cout<<endl;
}

void priority::push(string n,int d)
{
	node *p=new node(n,d);
	if(start==NULL)
	{
		start=end=p;
	}
	else
	{
		p->next=start;
		start->pre=p;
		start=p;
	}
}

int priority::pop()
{
	node *temp=start;
	if(start==NULL)
	{
		cout<<"list empty"<<endl;
		return(0);
	}
	else
	{
		start=start->next;
		start->pre=NULL;
		temp->next=NULL;
		return(temp->data);
	}
}

void priority::display()
{
	node *temp,*p;
	temp=start;
	if(temp==NULL)
	{
		cout<<"empty"<<endl;
	}
	else
	{
	while(temp!=NULL)
	{	p=temp->next;
		cout<<"Name "<<temp->name<<" weight "<<temp->data<<endl;
		temp=temp->next;
	}
	}
}

int main() {
	priority q;
	int ch,d;
	string n;
	while(1)
	{
		cout<<"enter your choice 1)load godown 2)display godown 3)arrange on shelf"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"enter name"<<endl;
			cin>>n;
			cout<<"enter weight"<<endl;
			cin>>d;
			q.push(n,d);
			break;
		case 2:
			q.display();
			break;
		case 3:
			q.store(q);
			break;
		}
	}
	return 0;
}
