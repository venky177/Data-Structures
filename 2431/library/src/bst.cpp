//============================================================================
// Name        : dictionary.cpp
// Author      : Venkatesh Lokare
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

class node
{
public:
	node *left,*right;
	char *book, *author;
	string publisher[5];
	int stock[5],cost[5],n;
	node()
	{
		char b[20],a[20];
		left=NULL;
		right=NULL;
		cout<<"Enter book name";
		cin>>b;
		cout<<"Enter author name";
		cin>>a;
		int len=strlen(b);
		book= new char[len+1];
		strcpy(book,b);

		int len1=strlen(a);
		author= new char[len1+1];
		strcpy(author,a);
		this->n=n;
		cout<<"enter no of publisher"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"enter publisher name";
			cin>>publisher[i];
			cout<<"enter "<<publisher[i]<<" stock";
			cin>>stock[i];
			cout<<"enter price of one book ";
			cin>>cost[i];

		}
	}
};
class dict
{
public:
	node *root;
	dict()
	{
		root=NULL;
	}
	void insert();
	void insert1(node *,node *);
	void search();
	int search1(node *,char [] );
	void display();
	void asce(node *);
	void desc(node *);
	int buy(node *);
};
void dict::insert()
{
	node *p;
	p=new node();
	if(root==NULL)
	{
		root=p;
	}
	else
	{
		insert1(root,p);
	}
}
void dict::insert1(node *r,node *q)
{
	int x=strcmp(r->book,q->book);
	if(x==0)
	{
		cout<<"Cannot be inserted";
	}
	else if(x>0)
	{
		if(r->left==NULL)
		{
			r->left=q;
		}
		else
		{
			insert1(r->left,q);
		}
	}
	else
	{
		if(r->right==NULL)
				{
					r->right=q;
				}
				else
				{
					insert1(r->right,q);
				}
	}
}
int dict::buy(node *p)
{	int no,bk;
	for(int i=0;i<p->n;i++)
		{
		cout<<"\n"<<i<<")\t"<<p->publisher[i]<<"\t"<<p->stock[i]<<"\t"<<p->cost[i]<<endl;
		}
	cout<<"enter publisher no";
	cin>>no;
	cout<<"enter amount of books u want";
	cin>>bk;
	if(bk>p->stock[no])
	{
	cout<<"sorry we dont have enough stock"<<endl;
	return(0);
	}
	else
	{cout<<"total cost = "<<p->cost[no]*bk<<endl;
	p->stock[no]-=bk;
	return(p->cost[no]*bk);
	}

}
void dict::asce(node *rt)
{
	if(rt!=NULL)
	{

	asce(rt->left);
	cout<<"\nTitle\tAuthor\tPublisher\tStock\tCost per book";
	for(int i=0;i<rt->n;i++)
	{
	cout<<"\n"<<rt->book<<"\t"<<rt->author<<"\t"<<rt->publisher[i]<<"\t"<<rt->stock[i]<<"\t"<<rt->cost[i]<<endl;
	}
	asce(rt->right);
	}
}

void dict::search()
{
	int amount=0,money;
	char wo[20],ch;
	do{
	cout<<"Enter Book you want to search";
	cin>>wo;
	money=search1(root,wo);
	amount+=money;
	cout<<"do u wanna buy another book(y/n)?";
	cin>>ch;
	}while(ch!='n');
	cout<<"total amount is "<<amount<<endl;
}
int dict::search1(node *roo,char wor[20])
{
	if(roo==NULL)
		{
			cout<<"Book not found"<<endl;
			return 0;
		}
	else
		{int z=strcmp(roo->book,wor);
	if(z==0)
		{
			cout<<root->book<<"\t"<<root->author;
			int money=buy(roo);
			return(money);
		}
	else if(z<0)
	{
		search1(root->right,wor);
	}
	else if(z>0)
	{
		search1(root->left,wor);
	}
		}
}


int main()
{
	dict d;
	int c;
	do
	{
		cout<<"MENU";
		cout<<"\n1.Insert\t2.Display\t3.Search\n";
		cin>>c;
		switch(c)
		{
		case 1:
			d.insert();
			break;
		case 2:
			d.asce(d.root);
			break;
		case 3:
			d.search();
			break;
		default:
			cout<<"Wrong choice";
			break;
		}
	}while(c!=5);
	return 0;
}

/* OUTPUT
MENU
1.Insert	2.Display	3.Search
1
Enter book nameaaaa
Enter author namebbbb
enter no of publisher
2
enter publisher nameccc
enter ccc stock5
enter price of one book 10
enter publisher nameddd
enter ddd stock4
enter price of one book 5
MENU
1.Insert	2.Display	3.Search
2

Title	Author	Publisher	Stock	Cost per book
aaaa	bbbb	ccc	5	10

aaaa	bbbb	ddd	4	5
MENU
1.Insert	2.Display	3.Search
1
Enter book nameqqq
Enter author namewww
enter no of publisher
1
enter publisher namefff
enter fff stock5
enter price of one book 6
MENU
1.Insert	2.Display	3.Search
2

Title	Author	Publisher	Stock	Cost per book
aaaa	bbbb	ccc	5	10

aaaa	bbbb	ddd	4	5

Title	Author	Publisher	Stock	Cost per book
qqq	www	fff	5	6
MENU
1.Insert	2.Display	3.Search
3
Enter Book you want to searchaaaa
aaaa	bbbb
0)	ccc	5	10

1)	ddd	4	5
enter publisher no0
enter amount of books u want3
total cost = 30
do u wanna buy another book(y/n)?y
Enter Book you want to searchqqq
aaaa	bbbb
0)	fff	5	6
enter publisher no0
enter amount of books u want3
total cost = 18
do u wanna buy another book(y/n)?n
total amount is 48
MENU
1.Insert	2.Display	3.Search
 */