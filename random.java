//package Swing;

//package moduleninethreeone;
import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
class myframew extends JFrame implements ActionListener
        {
    Container c;
    JButton btnNew = new JButton("New File");
    JButton btnExit = new JButton("Exit");
    public myframew()
    {
      c=this.getContentPane();
      c.setLayout(null);
      c.setBackground(Color.BLUE);
      btnNew.setBounds(80,80,100,40);
      btnExit.setBounds(200,80,100,40);
      c.add(btnNew);
      c.add(btnExit);
      btnNew.addActionListener(this);
      btnExit.addActionListener(this);
     }

    @Override
    public void actionPerformed(ActionEvent e) {
       if(e.getSource()==btnNew)
       {
           JFrame nf = new JFrame();
           nf.setBounds(200,200,400,400);
           nf.setBackground(Color.black);
           nf.setTitle("New Frame");
           nf.setVisible(true);
           nf.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
       }
       else if(e.getSource()==btnExit)
       {
           System.exit(0);
       }
    }
    
  }

public class random{

    public static void main(String[] args) {
        myframew frame = new myframew();
        frame.setTitle("Menu");
        frame.setBounds(200,200,400,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        
    }
}