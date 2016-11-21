//============================================================================
// Name        : stack.cpp
// Author      : venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
import java.util.Scanner;

class node
{
	public
	int data;
	String des;
	node next;

	node(int x,String d)
	{
	des=d;
	data=x;
	next=null;
	}

};
class hash
{
	public
	node p[];
	Scanner v=new Scanner(System.in);
	void push()
	{
		node temp;
		int no,flag;
		String d = null;
		System.out.println("enter data");
		no=v.nextInt();
		int i=hashf(no);
		System.out.println("hash val " +i);
		flag=datacheker(no,i);
		if(flag==0)
			{
			System.out.println("enter description");
			d=v.findInLine(d);
			temp=new node(no,d);
				if(p[i]==null)
					{
					p[i]=temp;
					}
				else
					{
					temp.next=p[i];
					p[i]=temp;
					}
			}
		}
	void display()
	{
		node temp;
		for(int i=0;i<10;i++)
		{
		temp=p[i];
		System.out.println(i);
		if(temp!=null)
		{
		while(temp!=null)
		{
		System.out.println("Number "+temp.data +" describtion "+temp.des);
		temp=temp.next;
		}
		System.out.println("");
		}
		}
		}
    
	int datacheker(int data,int h)
    {	String ch = null;
    	node temp=p[h];
    	int flag=0;
    	String d = null;
    	System.out.println("Please wait....");
    	while(temp!=null)
    	{
    		if(data==temp.data)
    		{	flag=1;
    		System.out.println("data already present");
    		System.out.println("do u wanna overite?(y/n)");
    			ch=v.findInLine(ch);
    			if(ch=="y")
    			{
    				System.out.println("enter description");
    				d=v.findInLine(d);
    				temp.des=d;
    			}
    			break;
    		}
    	}
    return(flag);
    }
	
	int hashf(int d)
	{
		int hval=d%10;
		return(hval);
	}
    void search(int data)
    {
    	int h=hashf(data),flag=0;
    	node temp=p[h];
    	while(temp!=null)
    	{
    		if(data==temp.data)
    		{
    			System.out.println("number "+temp.data);
    			System.out.println("Description "+temp.des);
    		flag=1;
    		}
    		temp=temp.next;
    	}
    	if(flag==0)
    	{
    		System.out.println("number not present");
    	}

    }
void del()
	{
		node j,q;
		int d;
		String ch = "";
		System.out.println("enter data to delete");
		d=v.nextInt();
		int h=hashf(d);
		j=p[h];
		q=p[h];
		while(j.data!=d && j!=null)
		{q=j;
		j=j.next;
		}
		if(d==j.data)
		{
			System.out.println("data found");
			System.out.println("sure u wanna delete(y/n)");
			ch=v.findInLine(ch);
			if(ch=="y")
			{
				q.next=j.next;
				j.next=null;

			}

		}
		else
			System.out.println("data not present");
	}

	
    hash()
     {
	for(int i=0;i<10;i++)
	{
	p[i]=null;

	}

     }

    public static void main(String[] args)
    		{
    	Scanner g=new Scanner(System.in);
    			int a,r;
    			hash h=new hash() ;
    			while(true)
    			{
    			System.out.println("enter ur choice:1)push 2)search 3)delete 4)display hash table");
    			a=g.nextInt();
    				switch(a)
    				{
    				case 1:
    					h.push();
    					break;
    				case 2:
    					System.out.println("Enter data value");
    					r=g.nextInt();
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
    		}

};




