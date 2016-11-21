//============================================================================
// Name        : queue.cpp
// Author      : Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//============================================================================
// Name        : queue.cpp
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

class queue
{	public:
	node *start,*end;

	queue()
	{
		end=NULL;
		start=NULL;
	}

	void enqueue(int d);
	void dequeue();
	void display();
};

void queue::enqueue(int d)
{
	node *p=new node(d);
	if(start==NULL)
	{
		end=p;
		start=p;
	}
	else
	{
		p->next=start;
		start=p;
	}
}

void queue::dequeue()
{
	node *p=start;
	if(start==NULL)
	{
		cout<<"list empty"<<endl;
	}
	else
	{
		while(p->next!=end)
			p=p->next;
		p->next=NULL;
		end=p;
	}
}

void queue::display()
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
	queue s;
	s.enqueue(17);
	s.enqueue(70);
	s.enqueue(80);
	s.display();
	s.dequeue();
	s.display();
	return 0;
}
