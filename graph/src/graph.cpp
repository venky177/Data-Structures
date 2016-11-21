//============================================================================
// Name        : graph.cpp
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
	int wt,flag,des;
	class node *next;

	friend class list;

	node(int d,int x)
	{
	des=d;
	wt=x;
	flag=0;
	next=NULL;
	}

};
class graph
{
public:
	node *p[10];
	int no,vis[10],count;
	graph(int n)
	{	no=n;
		count=0;
		for(int i=0;i<n;i++)
		{
			vis[i]=-1;
			p[i]=NULL;

		}
	}
	void prims(int no);
	node* min(int no);
	void setvis(int i);
	int checkvis(int i);
	void insert();
	void create(int s,int d,int wt);
	void display();
	int bft(int no);
	void dft(int no);
};

void graph::prims(int l)
{	setvis(l);
	node *f,*v;

	for (int i=0;i<no-1;i++)
	{int finalmin=99;
		for(int j=0;j<no;j++)
		{
			if(checkvis(j)==1)
			{
				f=min(j);
				if(f->wt<finalmin)
				{
					v=f;
					finalmin=f->wt;
				}
			}
		}
		cout<<i<<"->"<<v->des<<" dist("<<finalmin<<")"<<endl;
	setvis(v->des);
	}

}


void graph::setvis(int c)
{
	vis[c]=c;
}
int graph::checkvis(int c)
{
	if(vis[c]==c)
	{
		return(1);
	}
	else
		return(0);
}

node* graph:: min(int j)
{
	node*temp=p[j],*m;
	int min=temp->wt;
	while(temp!=NULL)
	{
		if(temp->wt<min && checkvis(temp->des)==0)
		{
			min=temp->wt;
			m=temp;
		}
	temp=temp->next;
	}
	return(m);
}
void graph::create(int s,int d,int wt)
{	node *temp;
	temp=new node(d,wt);
				if(p[s]==NULL)
					{
					p[s]=temp;
					}
				else
					{
					temp->next=p[s];
					p[s]=temp;
					}
}
void graph::insert()
{

	int s,flag,d,wt;
	cout<<"Enter source -> destination (distance) "<<endl;
	cin>>s>>d>>wt;
	create(s,d,wt);
	create(d,s,wt);

}

void graph::display()
{
node *temp;
for(int i=0;i<no;i++)
	{
	temp=p[i];
	cout<<i<<endl;
		if(temp!=NULL)
			{
			while(temp!=NULL)
					{
					cout<<" destination "<<temp->des<<" distance "<<temp->wt<<endl;
					temp=temp->next;
					}
			cout<<endl;
			}
	}
}

int graph::bft(int h)
{
	node *temp=p[h];
	int v=h;
	setvis(h);
	while(temp!=NULL)
	{	if(checkvis(temp->des)==0)
		{
		cout<<v<<"->"<<temp->des<<" dist("<<temp->wt<<")"<<endl;
		setvis(temp->des);
		count=count+temp->wt;
		}
		temp=temp->next;
	}
	temp=p[h];
	while(temp!=NULL)
	{
	count=bft(temp->des);
	temp=temp->next;
	}
return(count);
}

void graph::dft(int h)
{
	node *temp=p[h];
	int v=h;
	setvis(h);
	cout<<v<<"->"<<temp->des<<" dist("<<temp->wt<<")"<<endl;
	setvis(temp->des);
		//count=count+temp->wt;
	while(temp!=NULL)
	{
	temp=p[temp->des];
	if(checkvis(temp->des)==0)
	dft(temp->des);
	temp=temp->next;
	}
//return(count);
}



int main()
{
	int a,r,no,count;
	cout<<"enter no of nodes"<<endl;
	cin>>no;
	graph v(no);
	while(1)
	{
	cout<<"enter ur choice:1)insert 2)bft 3)dft 4)display graph 5)min"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			v.insert();
			break;
		case 2:
			cout<<"Enter data value"<<endl;
			cin>>r;
			count=v.bft(r);
			cout<<"total distance"<<count<<endl;
			break;
		case 3:
			cout<<"Enter data value"<<endl;
			cin>>r;
			v.dft(r);
			//cout<<"total distance"<<count<<endl;
			break;
		case 4:
			v.display();
			break;
		case 5:
			cout<<"Enter data value"<<endl;
			cin>>r;
			v.prims(r);
			break;

		}
	}
	return 0;
}
