import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class swingDemo{
    swingDemo() {
        JFrame frm = new JFrame("First Application");
        frm.setLayout(new FlowLayout());
        frm.setSize(500, 300);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel jlb = new JLabel("I belong to CSE-43");
        frm.add(jlb);
        frm.setVisible(true);
        JButton jalpha = new JButton("Alpha");
        JButton jbeta = new JButton("Beta");
        frm.add(jalpha);
        frm.add(jbeta);

        jalpha.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jlb.setText("Alpha is pressed!");
            }
        });

        jbeta.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jlb.setText("Beta is pressed!");
            }
        });
    }
}
public class gui {
    public static void main(String[] args) {
        new swingDemo();
    }
}
