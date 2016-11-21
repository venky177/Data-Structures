package com.example.test;
import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.TextView;
public class MainActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView v= (TextView)findViewById(R.id.textView2);
        Button b= (Button)findViewById(R.id.button1);
//        OnClickListener oclBtn = new OnClickListener() {     
//
//  @Override public void onClick(View arg0) {
//   // TODO Auto-generated method stub
//   TextView v= (TextView)findViewById(R.id.textView2);
//   v.setText("hi");
//  } 
//        };
//        
//        b.setOnClickListener(oclBtn);
      
        
    
    }
        
    public void mymethod(View arg0) {
//  // TODO Auto-generated method stub
     
  TextView v= (TextView)findViewById(R.id.textView2);
   Button b1= (Button)findViewById(R.id.button1);
   Button b2= (Button)findViewById(R.id.button2);
   if(arg0.getId()==R.id.button1)
  v.setText("hi");
   else v.setText("hshs");
 } 

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}