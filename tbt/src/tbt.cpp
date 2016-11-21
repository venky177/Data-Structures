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
	int data;
	int lbit,rbit;
	node *lc,*rc;
	node(int d)
	{
		data=d;
		lc=NULL;
		rc=NULL;
		rbit=lbit=0;
	}
};

class bst
{public:
	node *root,*head;
	bst()
	{
		root=NULL;
		head=NULL;
	}
void insert(node *t,node *temp);
void inorder(node *t);
void preorder();
void postorder();
void dum();
};

void bst::dum()
{	int d;
	cin>>d;
	node*temp=new node(d);
	if(root==NULL)
	{
	head=new node(999);
	head->lbit=1;
	head->lc=temp;
	head->rbit=0;
	head->rc=head;
	temp->lbit=temp->rbit=1;
	temp->lc=temp->rc=head;
	root=temp;
	}
else
	{
	node* trav=root;
	insert(trav,temp);
	}
}
void bst::insert(node *trav, node *temp)
{
if(temp->data<trav->data)
	{
	if(trav->lbit==0)
	{
		temp->lc=trav->lc;
		temp->rc=trav;
		trav->lc=temp;
		trav->lbit=1;
	}
	else
		insert(trav->lc,temp);
	}
else if(temp->data>trav->data)
	{
	if(trav->rbit==0)
	{
		temp->rc=trav->rc;
		temp->lc=trav;
		trav->rc=temp;
		trav->rbit=1;
	}
	else
		insert(trav->rc,temp);
}
}

void bst::inorder(node *t)
{
	node*temp=t;
	while(temp->lc!=head)
	{
		temp=temp->lc;
	}
	while(temp->rc!=head)
		{
			cout<<temp->data<<endl;
			temp=temp->rc;
		}
}
int main()
{
	int a;
	int r;
	bst h;
	while(1)
	{
	cout<<"enter ur choice:1)push 2)pop 3)display"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			h.dum();
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
