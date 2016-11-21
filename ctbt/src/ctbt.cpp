
#include<iostream>
#include<stdlib.h>

using namespace std;
class node
{
	public:
	int data;
	node *lchild;
	node *rchild;
	int lbit;
	int rbit;
};

class TBT
{
	private:
		node *root,*dummy;
	public:
		TBT()
		{
			root=NULL;
			dummy=NULL;
		}
		void create(int num);
		void display();
		void insert(node *, node *);
};

void TBT::create(int num)
{
	node *temp,*trav;
	temp=new node;
	temp->data=num;
	temp->lbit=0;
	temp->rbit=0;
	if(root==NULL)
	{
		dummy=new node;
		dummy->data=-9999;
		dummy->lbit=1;
		dummy->rbit=1;
		dummy->rchild=dummy;
		dummy->lchild=temp;
		temp->lchild=dummy;
		temp->rchild=dummy;
		root=temp;
	}
	else
	{
		trav=root;
		insert(trav,temp);
	}
}

void TBT::insert(node *trav, node *temp)
{
	if(temp->data<trav->data)
	{
		if(trav->lbit==0)
		{
			temp->lchild=trav->lchild;
			temp->rchild=trav;
			trav->lchild=temp;
			trav->lbit=1;
		}
		else
		insert(trav->lchild,temp);

	}
	if(temp->data>trav->data)
	{
		if(trav->rbit==0)
		{
			temp->rchild=trav->rchild;
			temp->lchild=trav;
			trav->rchild=temp;
			trav->rbit=1;
		}
		else
		insert(trav->rchild,temp);
	}
}

void TBT::display()
{
	void inorder(node *trav,node *dummy);
	void preorder(node *trav,node *dummy);
	void postorder(node *trav,node *dummy);

	int ch;
	node *trav, *trav2, *trav3;
	if(root==NULL)
	{
		cout<<"TBT is not yet created:";
		return;
	}
	else
	{
	do
	{
	cout<<"\n\n Enter ur choice";
	cout<<"\n 1.Inorder Traversal";
	cout<<"\n 2.Preorder Traversal";
	cout<<"\n 3.Postorder Traversal";
	cout<<"\n 4.Exit";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"  ";
			trav=root;
			inorder(trav,dummy);
			break;
		case 2: cout<<"  ";
			node *trav2;
			trav2=root;
			preorder(trav2,dummy);
			break;
		case 3: cout<<"  ";
			node *trav3;
			trav3=root;
			postorder(trav3,dummy);
			break;
		case 4: break;
		default:cout<<"\n Wrong choice";
			break;
	}
	}while(ch!=4);
      }
}


void preorder(node *trav,node *dummy)
{
	cout<<endl;
	if(trav==NULL)
	{
		cout<<"\n TBT Tree is empty";
	}
	else
	{
	while(trav!=dummy)
	{
		cout<<"\n"<<trav->data;

		if(trav->lbit==1)
		{
			trav=trav->lchild;
		}
		else
		{
			while(trav->rbit==0 && trav->rchild!=dummy)
			{
				trav=trav->rchild;
			}
			trav=trav->rchild;
		}
	}}

}

void inorder(node *trav,node *dummy)
{
	cout<<endl;
	if(trav==NULL)
	{
		cout<<"\n TBT tree is empty";
	}
	else
	{
	while(trav!=dummy)
	{
		while(trav->lbit==1)
		{
		       trav=trav->lchild;
		}
		cout<<"\n"<<trav->data;
		while(trav!=dummy)
		{
			if(trav->rbit==1)
			{
				trav=trav->rchild;
				while(trav->lbit==1)
				{
					trav=trav->lchild;
				}
				cout<<trav->data<<endl;
			}
			else
			{
			while(trav->rbit==0)
			{
				trav=trav->rchild;
				if(trav==dummy)
				{
					break;
				}
				cout<<trav->data<<endl;
			}
			}
		}

	}}

}

void postorder(node *trav,node *dummy)
{
   int i=0,a[20],n;
   if(trav==NULL)
   {
	cout<<"\n TBT Tree is Empty.";
   }
   else
   {
	while(trav!=dummy)
	{
	   a[i]=trav->data;
	   i++;
	   if(trav->rbit==1)
	   {
		trav=trav->rchild;
	   }
	   else
	   {
	      while(trav->lbit==0 && trav->lchild!=dummy)
	      {
		  trav=trav->lchild;
	      }
	      trav=trav->lchild;
	   }
	}
   }
   n=i;
   n--;

   for(i=n;i>=0;i--)
   {
	cout<<"\n"<<a[i];
   }
}



int main()
{
	TBT t;
	int ch,num,i,temp;
	do
	{
	cout<<endl<<"1. Create TBT";
	cout<<endl<<"2. Display";
	cout<<endl<<"3. Exit";
	cout<<endl<<"Enter ur choice";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<endl<<"Enter number of nodes u want to insert";
			cin>>num;
			for(i=0;i<num;i++)
			{
				cout<<endl<<"Enter the data";
				cin>>temp;
				t.create(temp);
			}
			break;
		case 2: t.display();
			break;
		case 3: break;
		default: cout<<endl<<"Wrong choice";
	}
	}while(ch!=3);
	return 0;
}
