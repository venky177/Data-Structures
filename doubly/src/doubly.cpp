//============================================================================
// Name        : doubly.cpp
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
	node *next,*pre;
	node(int d)
	{
		data=d;
		next=pre=NULL;
	}
};

class doubly
{	public:
	node *start;

	doubly()
	{
		start=NULL;
	}

	void insert_at_start(int d);
	void insert_at_element(int d);
	void insert_at_end(int d);
	void delete_at_start();
	void delete_at_element(int x);
	void delete_at_end();
	void display();
};

void doubly::insert_at_start(int d)
{
	node *p=new node(d);
	if(start==NULL)
	{
		p->next=p->pre=p;
		start=p;
	}
	else
	{
		p->next=start;
		p->pre=start->pre;
		start->pre->next=p;
		start->pre=p;
		start=p;
	}
}
void doubly::insert_at_end(int d)
{
	node *p=new node(d);
	if(start==NULL)
	{
		p->next=p->pre=p;
		start=p;
	}
	else
	{
		p->next=start;
		p->pre=start->pre;
		start->pre->next=p;
		start->pre=p;
	}
}

void doubly::insert_at_element(int d)
{	char ch;
	int x;
	cout<<"enter element";
	cin>>x;

	node *p=new node(d);
	node *temp=start,*v;
	while(temp->data!=x)
	{	v=temp->next;
		if(v==start) break;
		temp=temp->next;
	}
	if(temp->data==x)
	{
		cout<<"data found insert before or after(b/a)"<<endl;
		cin>>ch;
	}
	else
	{
		cout<<"data absent"<<endl;
	}
	if(ch=='b')
	{
		p->next=temp;
		p->pre=temp->pre;
		temp->pre->next=p;
		temp->pre=p;

	}
	else
	{
		p->next=temp->next;
		temp->next->pre=p;
		p->pre=temp;
		temp->next=p;

	}
}

void doubly::delete_at_start()
{node *p=start->next;
	if(start==NULL)
	{
		cout<<"list empty"<<endl;
	}
	else
	{
		start->pre->next=p;
		p->pre=start->pre;
		p->pre=start->pre;
		start->next=start->pre=NULL;
		start=p;
	}
}

void doubly::delete_at_element(int x)
{node *p,*temp=start,*v;
	if(start==NULL)
	{
		cout<<"list empty"<<endl;
	}
	else
	{
		while(temp->data!=x)
			{	v=temp->next;
				if(v==start) break;
				temp=temp->next;
			}
		if(temp->data==x)
			{
			temp->next->pre=temp->pre;
			temp->pre->next=temp->next;
			temp->next=temp->pre=NULL;
			}
			else
			{
				cout<<"data absent"<<endl;
			}

	}
}

void doubly::display()
{
	node *temp,*p;
	temp=start;
	if(temp==NULL)
	{
		cout<<"empty";
	}
	else
	{
	while(temp!=NULL)
	{	p=temp->next;
		cout<<"data"<<temp->data<<endl;
		if(p==start) break;
		temp=temp->next;
	}
	}
}



int main() {
	doubly d;
	d.insert_at_start(17);
	d.insert_at_start(70);
	d.insert_at_start(7);
	d.insert_at_end(80);
	d.insert_at_end(99);
	d.display();
	d.delete_at_start();
	d.display();
	d.delete_at_element(80);
	d.display();
	return 0;
}
