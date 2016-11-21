import java.util.Scanner;


 class node
	{	public
		int data;
		node next;
		node(int d)
		{
			data=d;
			next=null;
		}
	};

public class stack {
		public
		node start;

		stack()
		{
			start=null;
		}

		void push(int d)
		{
			node p=new node(d);
			if(start==null)
			{
				start=p;
			}
			else
			{
				p.next=start;
				start=p;
			}
		}
		int pop()
		{
			node p=start.next;
			if(start==null)
			{
				return 0;
			}
			else
			{
				start.next=null;
				start=p;
				return 1;
			}
		}
		String display()
		{	String s="";
			node temp,p;
			temp=start;
			if(temp==null)
			{
				return("");
			}
			else
			{
			while(temp!=null)
			{	p=temp.next;
			s=s+temp.data+"";
				if(p==start) break;
				temp=temp.next;
			}
			return(s);
			}
		}

	

	

	

public static void main(String[] args) {
		int d;
		Scanner v= new Scanner(System.in);
		stack s = new stack();
		d=v.nextInt();
		s.push(d);
		s.push(70);
		s.push(80);
		s.display();
		s.pop();
		s.display();
	}

};
