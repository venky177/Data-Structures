//============================================================================
// Name        : bst.cpp
// Author      : Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node
{	public:
	string data;
	node *lc,*rc;
	node(string d)
	{
		data=d;
		lc=NULL;
		rc=NULL;
	}
};

class bst
{public:
	node *root;
	bst()
	{
		root=NULL;
	}
node* insert(node *t,string d);
void inorder(node *t);
void preorder();
void postorder();
void des();
};

node* bst:: insert(node *t,string d)
{
	if(t==NULL)
	{
		node*p=new node(d);
		if(t==root)
		{
			root=p;
		}
	return(p);
	}
	else if(t->data>d)
	{
		t->lc=insert(t->lc,d);
	}
	else if(t->data<d)
	{
		t->rc=insert(t->rc,d);
	}
	else
	{
		cout<<"data exists"<<endl;
		return(NULL);
	}
}

void bst::inorder(node *t)
{	if(t!=NULL)
	{
	inorder(t->lc);
	cout<<t->data<<endl;
	inorder(t->rc);
	}
}


int main()
{
	int a;
	string r;
	bst h;
	while(1)
	{
	cout<<"enter ur choice:1)push 2)pop 3)display"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			cout<<"enetr data";
			cin>>r;
			h.insert(h.root,r);
			break;
		case 2:
			h.inorder(h.root);
			break;
		case 3:
			//h.display();
			break;
		}
	}
	return 0;
}
