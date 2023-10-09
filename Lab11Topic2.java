
import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

class MyFrameee extends JFrame implements ActionListener
{
    JLabel labelLogin = new JLabel("Log in");
    JLabel labellogin = new JLabel("Username    : ");
    JTextField textlogin = new JTextField();
    JLabel labelPassword = new JLabel("Password: ");
    JPasswordField textPassword = new JPasswordField();
    JButton btnSubmit = new JButton("Submit");
    JButton btnRefresh = new JButton("Refresh");
    String myLogin ="admin";
    String myPassword ="cse";
    public MyFrameee()
    {
      Container c;
      c=this.getContentPane();
      c.setLayout(null);
      c.setBackground(Color.LIGHT_GRAY);
      labellogin.setBounds(100,50,90,35);
      textlogin.setBounds(200,50,100,35);
      labelPassword.setBounds(100,100,90,35);
      textPassword.setBounds(200,100,180,35);
      btnSubmit.setBounds(200,135,80,35);
      btnRefresh.setBounds(305,135,80,35);
      c.add(labelLogin);
      c.add(textlogin);
      c.add(labellogin);
      c.add(labelPassword);
      c.add(textPassword);
      c.add(btnSubmit);
      c.add(btnRefresh);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        
    }
   }
public class Lab11Topic2 {

    public static void main(String[] args) {
        MyFrameee frame = new MyFrameee();
        frame.setTitle("Login Form");
        frame.setBounds(200,200,500,350);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        
    }
}