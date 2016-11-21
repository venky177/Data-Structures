//============================================================================
// Name        : library.cpp
// Author      : Venkatesh Lokare
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/**/
/*#include <iostream>
#include <string.h>
using namespace std;
class node
{
	int cost[10],stock[10],n;
	node *lc,*rc;
	char *name,*author;string pub[10];
public:
	friend class shelf;
	node(char *na,char *a,int n)
	{	rc=lc=NULL;
		int len=strlen(na);
		name= new char[len+1];
		strcpy(name,na);

		int len1=strlen(a);
		author= new char[len1+1];
		strcpy(author,a);
		this->n=n;
		for(int i=1;i<=n;i++)
		{
		cout<<"enter the "<<i<<" publishers names";
		cin>>pub[i];
		cout<<"enter the "<<i<<" stock ";
		cin>>stock[i];
		cout<<"enter the "<<i<<" price of one book";
		cin>>cost[i];
		}
	}

};
class shelf
{

public:
	node*root;
	shelf()
	{
		root=NULL;
	}
	node* insert(node* t,char *data)
	{
		if(t==NULL)
		{	int n;char a[20];
			cout<<"enter authors name";
			cin>>a;
			cout<<"enter number of publishers";
			cin>>n;
			node*p=new node(data,a,n);
			if(t==root)root=p;
			return(p);
		}
		else if((strcmp(t->name,data))==1)
		{
			t->rc=insert(t->rc,data);
		}
		else
		{
			t->lc=insert(t->lc,data);
		}
	}
	void search(node* t,char *data)
	{
		if((strcmp(t->name,data))== 0)
		{
			cout<<" BOOK "<<t->name<<endl;;
			cout<<" Author "<<t->author<<endl;
			cout<<" List Of Publishers"<<endl;
			cout<<" name   stock  cost"<<endl;
			for(int i=1;i<=t->n;i++)
			cout<<i<<t->pub[i]<<" "<<t->stock[i]<<" "<<t->cost[i]<<endl;
		}
		else if((strcmp(t->name,data))==1)
		{
			search(t->rc,data);
		}
		else if((strcmp(t->name,data))== -1)
		{
			search(t->lc,data);
		}
	}
	node*getroot()
	{
		return(root);
	}
	void display(node*t)
	{
		if(t!=NULL)
		{
			display(t->lc);
			cout<<" BOOK "<<t->name<<endl;;
			cout<<" Author "<<t->author<<endl;
			cout<<" List Of Publishers"<<endl;
			cout<<" name   stock  cost"<<endl;
			for(int i=1;i<=t->n;i++)
			cout<<i<<t->pub[i]<<" "<<t->stock[i]<<" "<<t->cost[i]<<endl;
			display(t->rc);
		}
	}
};
int main() {
	shelf v;
	int ch;
	char ip[20];
	while(1)
	{
	cout<<"1)insert 2)search 3)display"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<"enter name of book"<<endl;
		cin>>ip;
		v.insert(v.root,ip);
		break;
	case 2:
		cout<<"enter name of book"<<endl;
	    cin>>ip;
		v.search(v.root,ip);
		break;
	case 3:
		v.display(v.root);
		break;
	}
	}
	return 0;
}


*/
