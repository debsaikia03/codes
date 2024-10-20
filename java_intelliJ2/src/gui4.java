import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


class swingDemo4{
    swingDemo4() {
        JFrame frm = new JFrame("Image Selector");
        frm.setSize(600,500);
        frm.setLayout(null);
        frm.setVisible(true);
        frm.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        JLabel jlb1 = new JLabel("Image 1");
        jlb1.setBounds(100,100,50,20);
        frm.add(jlb1);

        JButton b1 = new JButton("Cat");
        b1.setBounds(200,100,80,20);
        frm.add(b1);

        JLabel jlb2 = new JLabel("Image 2");
        jlb2.setBounds(100,150,50,20);
        frm.add(jlb2);

        JButton b2 = new JButton("Horse");
        b2.setBounds(200,150,80,20);
        frm.add(b2);

        JLabel jlb3 = new JLabel("Image 3");
        jlb3.setBounds(100,200,50,20);
        frm.add(jlb3);

        JButton b3 = new JButton("Dog");
        b3.setBounds(200,200,80,20);
        frm.add(b3);

        JLabel jlb4 = new JLabel("Image 4");
        jlb4.setBounds(100,250,50,20);
        frm.add(jlb4);

        JButton b4 = new JButton("Cow");
        b4.setBounds(200,250,80,20);
        frm.add(b4);

        b1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                ImageIcon i1 = new ImageIcon("C:/Users/debsa/OneDrive/Documents/swing image/cat.jpg");
                JLabel jlb5 = new JLabel(i1);
                jlb5.setBounds(400, 100, 150,150);
                frm.add(jlb5);
            }
        });

        b2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                ImageIcon i1 = new ImageIcon("C:/Users/debsa/OneDrive/Documents/swing image/horse.jpg");
                JLabel jlb5 = new JLabel(i1);
                jlb5.setBounds(400, 100, 150,150);
                frm.add(jlb5);
            }
        });

        b3.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                ImageIcon i1 = new ImageIcon("C:/Users/debsa/OneDrive/Documents/swing image/dog.jpg");
                JLabel jlb5 = new JLabel(i1);
                jlb5.setBounds(400, 100, 150,150);
                frm.add(jlb5);
            }
        });

        b4.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                ImageIcon i1 = new ImageIcon("C:/Users/debsa/OneDrive/Documents/swing image/cow.jpg");
                JLabel jlb5 = new JLabel(i1);
                jlb5.setBounds(400, 100, 150,150);
                frm.add(jlb5);
            }
        });

    }
}
public class gui4 {
    public static void main(String[] args) {
        new swingDemo4();
    }
}
