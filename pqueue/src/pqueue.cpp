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
{	node *temp=start,*v=start;
	node *p=new node(d);
	if(start==NULL)
	{
		end=p;
		start=p;
	}
	else
	{	while(temp->data<d && temp!=end)
		{
		temp=temp->next;
		}
		if(temp==start)
		{
			p->next=start;
			start=p;
		}
		else if(temp==end)
		{
			end->next=p;
			end=p;
		}
		else
		{
			v->next=p;
			p->next=temp;
		}
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

int main()
{
	int a,r;
	queue h;
	while(1)
	{
	cout<<"enter ur choice:1)push 2)pop 3)display"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			cout<<"enetr data";
			cin>>r;
			h.enqueue(r);
			break;
		case 2:
			h.dequeue();
			break;
		case 3:
			h.display();
			break;
		}
	}
	return 0;
}
