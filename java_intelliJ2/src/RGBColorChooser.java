import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RGBColorChooser extends JFrame {
    private JComboBox<Integer> redCombo;
    private JComboBox<Integer> greenCombo;
    private JComboBox<Integer> blueCombo;
    private JPanel outputPanel;

    public RGBColorChooser() {
        setTitle("RGB Color Chooser");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JPanel mainPanel = new JPanel();
        mainPanel.setLayout(new GridLayout(4, 2, 5, 5));

        JLabel redLabel = new JLabel("Red:");
        JLabel greenLabel = new JLabel("Green:");
        JLabel blueLabel = new JLabel("Blue:");

        redCombo = new JComboBox<>();
        greenCombo = new JComboBox<>();
        blueCombo = new JComboBox<>();
        for (int i = 0; i <= 255; i++) {
            redCombo.addItem(i);
            greenCombo.addItem(i);
            blueCombo.addItem(i);
        }

        outputPanel = new JPanel();
        outputPanel.setBackground(Color.BLACK);

        JButton showButton = new JButton("Show Output");
        showButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int r = (int) redCombo.getSelectedItem();
                int g = (int) greenCombo.getSelectedItem();
                int b = (int) blueCombo.getSelectedItem();
                outputPanel.setBackground(new Color(r, g, b));
            }
        });

        mainPanel.add(redLabel);
        mainPanel.add(redCombo);
        mainPanel.add(greenLabel);
        mainPanel.add(greenCombo);
        mainPanel.add(blueLabel);
        mainPanel.add(blueCombo);
        mainPanel.add(outputPanel);
        mainPanel.add(showButton);

        add(mainPanel);

        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new RGBColorChooser();
            }
        });
    }
}
