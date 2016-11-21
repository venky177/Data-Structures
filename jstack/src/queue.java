
public class queue {
		node start,end;

		queue()
		{
			end=null;
			start=null;
		}

		void enqueue(int d)
		{
			node p=new node(d);
			if(start==null)
			{
				end=p;
				start=p;
			}
			else
			{
				p.next=start;
				start=p;
			}
		}
		void dequeue()
		{
			node p=start;
			if(start==null)
			{
				System.out.println("list empty");
			}
			else
			{
				while(p.next!=end)
					p=p.next;
				p.next=null;
				end=p;
			}
		}
		void display()
		{
			node temp,p;
			temp=start;
			if(temp==null)
			{
				System.out.println("list empty");
			}
			else
			{
			while(temp!=null)
			{	p=temp.next;
			System.out.println("data"+temp.data);
				if(p==start) break;
				temp=temp.next;
			}
			}
		}

	

	

	

public static void main(String[] args) {
		queue q=new queue();
		q.enqueue(17);
		q.enqueue(70);
		q.enqueue(80);
		q.display();
		q.dequeue();
		q.display();
		
	}

};
