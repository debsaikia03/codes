import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class swingDemo1{
    swingDemo1(){
        JFrame frm = new JFrame("Event");
        frm.setLayout(new FlowLayout());
        frm.setSize(500,300);
        frm.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        frm.setBounds(120,40,120,40);

        JTextField jt = new JTextField("");
        jt.setPreferredSize(new Dimension(100,20));
        frm.add(jt);

        JLabel jlb = new JLabel("Text is displayed here");
        frm.add(jlb);
        frm.setVisible(true);

        jt.addActionListener(new ActionListener() {
        @Override
        public void actionPerformed(ActionEvent e) {

            jlb.setText(jt.getText());
        }
        });
    }
}

public class gui1 {
    public static void main(String[] args) {
           new swingDemo1();

    }
}

