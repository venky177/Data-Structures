//============================================================================
// Name        : stathash.cpp
// Author      : Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class table
{public:
	int t[10][2];
	table()
	{
		for(int i=0;i<10;i++)
		{
			t[i][0]=0;
			t[i][1]=-1;
		}
	}
	int hash(int no);
	void insert(int no);
	void display();
	void with(int no,int h);
	void without(int no,int h);
};
void table::without(int no,int h)
{	int j=h,i=j;
	if(t[h][0]==0)
	{
		t[h][0]=no;
	}
	else
	{
		while(t[j][1]!=-1)
			{
			j=t[j][1];
			}
		i=j;
		while(t[i][0]!=0)
		{	i++;
			i=i%10;
		}
		t[i][0]=no;
		t[j][1]=i;

	}
}
void table::with(int no,int h)
{	int i=h,j=h,ol,nw,ov;
	if(t[h][0]==0)
		{
			t[h][0]=no;
		}
	else if(hash(t[h][0])!=h)
		{
			ov=t[h][0];
			ol=hash(t[h][0]);
			i=ol;
			j=t[ol][1];
			while(j!=h)
				{
					i=j;
					j=t[j][1];
				}
			cout<<i<<" "<<j;
			if(t[h][1]==-1)
				{
				t[i][1]=-1;
				without(ov,ol);
				}
			else
				{
					nw=t[h][1];
					t[i][1]=nw;
					without(ov,ol);
				}
			t[h][0]=no;
			t[h][1]=-1;
		}
	else
		{
			while(t[j][1]!=-1)
				{
					j=t[j][1];
				}
			i=j;
			while(t[i][0]!=0)
				{
					i++;
					i=i%10;
				}
			t[i][0]=no;
			t[j][1]=i;
	}
}

void table::insert(int no)
{	int ch;
	int h=hash(no);
	cout<<"do u want replacement or without replacement(0/1) "<<endl;
	cin>>ch;
		if(ch==0)
		{
			with(no,h);
		}
		else
		{
			without(no,h);
		}
}

int table::hash(int no)
{
	no=no%10;
	return(no);
}

void table:: display()
{
	for(int i=0;i<10;i++)
			{
			cout<<i<<" "<<t[i][0]<<" "<<t[i][1];
			cout<<endl;
			}
}
int main() {
	table t;
	int ch,val;
	while(1)
	{
		cout<<"enter your choice 1)display 2)insert"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			t.display();
			break;
		case 2:
			cout<<"enter value"<<endl;
			cin>>val;
			t.insert(val);
			break;
		case 3:
			break;
		}
	}
	return 0;
}
