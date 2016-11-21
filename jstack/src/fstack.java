import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class fstack extends JFrame implements ActionListener{
	stack s;
	Frame f;
	JButton b1,b2,b3;
	JLabel l1;
	TextField t;
	
	public fstack()
	{
		 f= new Frame();
			f.setLayout(new GridLayout());
			f.setVisible(true);
			f.setBounds(0,0,500,500);
			JLabel l = new JLabel("nos");
			l.setBounds(80,200,50,50);
			f.add(l);
			t=new TextField(7);
			t.setBounds(130,200,250,50);
			f.add(t);
			b1 = new JButton("PUSH");
			b1.setBounds(130,300,100,50);
			b1.addActionListener(this);
			f.add(b1);
			b2 = new JButton("POP");
			b2.setBounds(230,300,100,50);
			b2.addActionListener(this);
			f.add(b2);
			b3 = new JButton("DISPLAY");
			b3.setBounds(330,300,100,50);
			b3.addActionListener(this);
			f.add(b3);
	}
	public static void main(String[] args) {
	new fstack();
	stack s = new stack();
}

@Override
public void actionPerformed(ActionEvent e) {
	Object a = e.getSource();
	if(a==b1)
	{
	int no = Integer.parseInt(t.getText());
	System.out.println(no);
	s.push(no);
	t.setText("");	
	}
	if(a==b2)
	{
		int c=s.pop();
		if(c==0)
		{
			t.setText("list is empty");
		}
		else
			t.setText(c+"");
	}
	if(a==b3)
	{
	t.setText(s.display());	
	}
	
}
}
