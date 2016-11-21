//============================================================================
// Name        : stack.cpp
// Author      : venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	string des;
	class node *next;

	friend class list;

	node(int x,string d)
	{
	des=d;
	data=x;
	next=NULL;
	}

};
class hasht
{
	public:
	node *p[10];
	void push();
	void display();
    int datacheker(int data,int h);
	int pop();
	int hash(int d);
    void search(int data);
	void del();
    hasht()
     {
	for(int i=0;i<10;i++)
	{
	p[i]=NULL;

	}

     }
};

int hasht::datacheker(int data,int h)
{	char ch;
	node *temp=p[h];
	int flag=0;
	string d;
	cout<<"Please wait...."<<endl;
	while(temp!=NULL)
	{
		if(data==temp->data)
		{	flag=1;
			cout<<"data already present"<<endl;
			cout<<"do u wanna overite?(y/n)"<<endl;
			cin>>ch;
			if(ch=='y')
			{
				cout<<"enter description"<<endl;
				cin>>d;
				temp->des=d;
			}
			break;
		}
	}
return(flag);
}

void hasht::search(int data)
{
	int h=hash(data),flag=0;
	node *temp=p[h];
	while(temp!=NULL)
	{
		if(data==temp->data)
		{
		cout<<"number "<<temp->data<<endl;
		cout<<"Description "<<temp->des<<endl;
		flag=1;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		cout<<"number not present"<<endl;
	}

}

void hasht::del()
{
	node *j,*q;
	int d;
	char ch;
	cout<<"enter data to delete"<<endl;
	cin>>d;
	int h=hash(d);
	j=p[h];
	q=p[h];
	while(j->data!=d && j!=NULL)
	{q=j;
	j=j->next;
	}
	if(d==j->data)
	{
		cout<<"data found"<<endl;
		cout<<"sure u wanna delete(y/n)"<<endl;
		cin>>ch;
		if(ch=='y')
		{
			q->next=j->next;
			j->next=NULL;
			delete j;

		}

	}
	else
	cout<<"data not present"<<endl;
}

int hasht::hash(int data)
{
	int hval=data%10;
	return(hval);
}
void hasht::push()
{
node *temp;
int no,flag;
string d;
cout<<"Enter data.";
cin>>no;
int i=hash(no);
cout<<"hash val "<<i<<endl;
flag=datacheker(no,i);
if(flag==0)
	{
	cout<<"enter description"<<endl;
	cin>>d;
	temp=new node(no,d);
		if(p[i]==NULL)
			{
			p[i]=temp;
			}
		else
			{
			temp->next=p[i];
			p[i]=temp;
			}
	}
}

void hasht::display()
{
node *temp;
for(int i=0;i<10;i++)
{
temp=p[i];
cout<<i<<endl;
if(temp!=NULL)
{
while(temp!=NULL)
{
cout<<" number  "<<temp->data<<" describtion "<<temp->des<<endl;
temp=temp->next;
}
cout<<endl;
}
}
}
int main()
{
	int a,r;
	hasht h;
	while(1)
	{
	cout<<"enter ur choice:1)push 2)search 3)delete 4)display hash table"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			h.push();
			break;
		case 2:
			cout<<"Enter data value"<<endl;
			cin>>r;
			h.search(r);
			break;
		case 3:
			h.del();
			break;
		case 4:
			h.display();
			break;
		}
	}
	return 0;
}
