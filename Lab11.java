import java.awt.Color;
import java.awt.Container;
import java.awt.Font;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class MyFrameX extends JFrame implements ActionListener {
    Container c;
    Font fn = new Font("Arial", Font.BOLD, 15);
    JLabel labelLogin = new JLabel("Login");
    JTextField textLogin = new JTextField();
    JLabel labelPassword = new JLabel("Password");
    JPasswordField textPassword = new JPasswordField();
    JButton btnSubmit = new JButton("Submit");
    JButton btnRefresh = new JButton("Refresh");
    JLabel labelDisplay = new JLabel("Display Board");
    String myLogin = "admin";
    String myPassword = "CSE";

    public MyFrameX() {
        c = this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.GRAY);
        labelLogin.setBounds(100, 50, 90, 35);
        labelLogin.setFont(fn);
        textLogin.setBounds(200, 50, 180, 35);
        textLogin.setFont(fn);
        labelPassword.setBounds(100, 100, 180, 35);
        labelPassword.setFont(fn);
        textPassword.setBounds(200, 100, 180, 35);
        textPassword.setFont(fn);
        btnSubmit.setBounds(200, 150, 100, 35);
        btnSubmit.setFont(fn);
        btnSubmit.setForeground(Color.RED);
        btnRefresh.setForeground(Color.BLUE);
        btnRefresh.setBounds(305, 150, 110, 35);
        btnRefresh.setFont(fn);
        labelDisplay.setBounds(200, 210, 150, 35);
        labelDisplay.setFont(fn);
        // textLogin.setFont(fn);
        c.add(labelLogin);
        c.add(textLogin);
        c.add(labelPassword);
        c.add(textPassword);
        c.add(btnSubmit);
        c.add(btnRefresh);
        c.add(labelDisplay);
        btnSubmit.addActionListener(this);
        btnRefresh.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btnRefresh) {
            textLogin.setText("");
            textPassword.setText("");
            labelDisplay.setText("Enter Login and Password");

        }

        if (e.getSource() == btnSubmit) {
            labelDisplay.setText("Submit");
            String inputLogin = textLogin.getText();
            String inputpassword = String.copyValueOf(textPassword.getPassword());
            if ((inputLogin.equals(myLogin)) && (inputpassword.equals(myPassword))) {
                labelDisplay.setText("Login Successful");
            } else {
                labelDisplay.setText("Invalid Username?Password Detected");
            }
        }

        if (e.getSource() == btnRefresh) {
            btnRefresh.setText("Refreshed");
        }

    }
}

public class Lab11{
    public static void main(String[] args) {
        MyFrameX frame = new MyFrameX();
        frame.setTitle("Login Form");
        frame.setBounds(200, 200, 500, 350);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}