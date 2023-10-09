//package csethree;

import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

class MyFrame extends JFrame implements ActionListener
{
    //Container c;
    JButton btnSubmit = new JButton("Submit");
    JButton btnCancel = new JButton("Cancel");
    JLabel label1=new JLabel();
    
    
    public MyFrame()
    {
        Container c;
        c=this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.GRAY);
        //aDDING Submit Button
        btnSubmit.setBounds(100,100,100,35);
        btnCancel.setBounds(300,100,100,35);
        label1.setBounds(100,150,150,35);
        label1.setText("Output Here");
        c.add(btnCancel);
        c.add(btnSubmit);
        c.add(label1);
        btnSubmit.addActionListener(this);
        
        
    }   

    @Override
    public void actionPerformed(ActionEvent e) {
     if(e.getSource()==btnSubmit){
         label1.setText("Submit Button is Clicked");
     }
    }    
}

public class Lab10Class{

    public static void main(String[] args) {
        MyFrame frame = new MyFrame();
        frame.setTitle("My Form");
        frame.setBounds(20,10,500,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        
    }
}