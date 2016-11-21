//============================================================================
// Name        : topo.cpp
// Author      : Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class node
{
	public:
	int name,ind,oud;
	class node *nextp[10];;

	friend class list;

	node(int d,int od)
	{
	name=d;
	ind=0;
	oud=od;
	for(int i=0;i<od;i++)
	{
	nextp[i]=NULL;
	}

	}

};
class topo
{
public:
	node *p[10];
	int no,vis[10],count;
	topo(int n)
	{	no=n;
		count=0;
		for(int i=0;i<n;i++)
		{
			vis[i]=-1;
			p[i]=NULL;

		}
	}


	void setvis(int i);
	int checkvis(int i);
	void insert();
	void create(int s,int d,int wt);
	void display();
	void linker(int s,int l,int d);
	void sort(int d);
	void sorter();
};

void topo::sorter()
{
	for (int v=0;v<no;v++)
	{
		if(p[v]->ind==0 && checkvis(v)==0)
		{
			sort(v);
		}
	}
}
void topo::sort(int b)
{
	setvis(b);
	for(int x=0;x<p[b]->oud;x++)
	{
		p[b]->nextp[x]->ind--;
	}
sorter();
}


void topo::setvis(int c)
{
	vis[c]=c;
	cout<<" "<<c;
}
int topo::checkvis(int c)
{
	if(vis[c]==c)
	{
		return(1);
	}
	else
		return(0);
}


void topo::create(int s,int n,int od)
{	node *temp;
	temp=new node(n,od);
		if(p[s]==NULL)
			{
			p[s]=temp;
			}
}
void topo::linker(int s,int link,int d)
{
	if(p[s]->nextp[link]==NULL)
	{
		p[s]->nextp[link]=p[d];
		p[d]->ind++;
	}
}
void topo::insert()
{

	int n,od,des;
	for(int s=0;s<no;s++)
	{
	cout<<"for node "<<s<<" out degree is:"<<endl;
	cin>>od;
	create(s,s,od);
	}

	for(int i=0;i<no;i++)
	{
	cout<<"for node "<<i<<" enter outgoing values:"<<endl;
	for(int j=0;j<p[i]->oud;j++)
	{
		cin>>des;
		linker(i,j,des);
	}
	}

}

void topo::display()
{
node *temp;
for(int i=0;i<no;i++)
	{
	cout<<"node name"<<p[i]->name<<endl;
	cout<<"node indegree"<<p[i]->ind<<endl;
	cout<<"node outdegree"<<p[i]->oud<<endl;
	for(int k=0;k<p[i]->oud;k++)
	{
		cout<<"node points to ->"<<p[i]->nextp[k]->name<<endl;
	}
	}
}





int main()
{
	int a,no;
	cout<<"enter no of nodes"<<endl;
	cin>>no;
	topo v(no);
	while(1)
	{
	cout<<"enter ur choice:1)insert 2)display topo 3)sort"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			v.insert();
			break;
		case 2:
			v.display();
			break;
		case 3:
			v.sorter();
			break;

		}
	}
	return 0;
}
