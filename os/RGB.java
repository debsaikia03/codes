import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RGB extends JFrame implements ActionListener {
    private JLabel redLabel, greenLabel, blueLabel;
    private JComboBox<Integer> redComboBox, greenComboBox, blueComboBox;
    private JButton showOutputButton;

    public RGB() {
        setTitle("RGB Color Chooser");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(4, 2));

        Color myColor1 = new Color(255,0,0);
        redLabel = new JLabel("Red:");
        redLabel.setForeground(myColor1);
        add(redLabel);

        redComboBox = new JComboBox<>();
        for (int i = 0; i <= 255; i++) {
            redComboBox.addItem(i);
        }
        add(redComboBox);

        Color myColor2 = new Color(0,255,0);
        greenLabel = new JLabel("Green:");
        greenLabel.setForeground(myColor2);
        add(greenLabel);

        greenComboBox = new JComboBox<>();
        for (int i = 0; i <= 255; i++) {
            greenComboBox.addItem(i);
        }
        add(greenComboBox);

        Color myColor3 = new Color(0,0,255);
        blueLabel = new JLabel("Blue:");
        blueLabel.setForeground(myColor3);
        add(blueLabel);

        blueComboBox = new JComboBox<>();
        for (int i = 0; i <= 255; i++) {
            blueComboBox.addItem(i);
        }
        add(blueComboBox);

        showOutputButton = new JButton("Show Output");
        showOutputButton.addActionListener(this);
        add(showOutputButton);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == showOutputButton) {
            int red = (int) redComboBox.getSelectedItem();
            int green = (int) greenComboBox.getSelectedItem();
            int blue = (int) blueComboBox.getSelectedItem();
            Color color = new Color(red, green, blue);
            getContentPane().setBackground(color);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            RGB colorChooser = new RGB();
            colorChooser.setVisible(true);
        });
    }
}
