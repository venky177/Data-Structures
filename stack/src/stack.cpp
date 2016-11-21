//============================================================================
// Name        : stack.cpp
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
	node *next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};

class stack
{	public:
	node *start;

	stack()
	{
		start=NULL;
	}

	void push(int d);
	void pop();
	void display();
};

void stack::push(int d)
{
	node *p=new node(d);
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		p->next=start;
		start=p;
	}
}

void stack::pop()
{
	node *p=start->next;
	if(start==NULL)
	{
		cout<<"list empty"<<endl;
	}
	else
	{
		start->next=NULL;
		start=p;
	}
}

void stack::display()
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
	stack s;
	s.push(17);
	s.push(70);
	s.push(80);
	s.display();
	s.pop();
	s.display();
	return 0;
}
