import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class swingDemo3{


    swingDemo3(){
        JFrame frm = new JFrame("Calculator");
        frm.setSize(600,500);
        frm.setLayout(null);
        frm.setVisible(true);
        frm.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        JTextField jt1 = new JTextField();
        jt1.setBounds(300,100,200,20);
        frm.add(jt1);

        JLabel jlb1 = new JLabel("Enter 1st number: ");
        jlb1.setBounds(100,100,200,20);
        frm.add(jlb1);

        JTextField jt2 = new JTextField();
        jt2.setBounds(300,200,200,20);
        frm.add(jt2);

        JLabel jlb2 = new JLabel("Enter 2nd number: ");
        jlb2.setBounds(100,200,200,20);
        frm.add(jlb2);

        JTextField jt3 = new JTextField();
        jt3.setBounds(300,300,200,20);
        jt3.setEditable(false);
        frm.add(jt3);

        JLabel jlb3 = new JLabel("Result: ");
        jlb3.setBounds(100,300,200,20);
        frm.add(jlb3);

        JButton b1 = new JButton("+");
        b1.setBounds(100,400,50,50);
        frm.add(b1);

        JButton b2 = new JButton("-");
        b2.setBounds(200,400,50,50);
        frm.add(b2);

        JButton b3 = new JButton("*");
        b3.setBounds(300,400,50,50);
        frm.add(b3);

        JButton b4 = new JButton("/");
        b4.setBounds(400,400,50,50);
        frm.add(b4);

        b1.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jt1.getText());
                double b = Double.parseDouble(jt2.getText());

                double c= a+b;

                jt3.setText(""+c);
            }
        });

        b2.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jt1.getText());
                double b = Double.parseDouble(jt2.getText());

                double c= a-b;

                jt3.setText(""+c);
            }
        });

        b3.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jt1.getText());
                double b = Double.parseDouble(jt2.getText());

                double c= a*b;

                jt3.setText(""+c);
            }
        });

        b4.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jt1.getText());
                double b = Double.parseDouble(jt2.getText());

                double c= a/b;

                jt3.setText(""+c);
            }
        });

    }
}



public class gui3 {
    public static void main(String[] args) {
        new swingDemo3();
    }
}
