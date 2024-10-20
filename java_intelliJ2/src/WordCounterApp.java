import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class WordCounterApp extends JFrame implements ActionListener {
    private JTextArea inputArea;
    private JLabel wordCountLabel;
    private JButton countButton;
    public WordCounterApp() {
        super("Word Counter");
        inputArea = new JTextArea();
        inputArea.setFont(new Font("Monospaced", Font.PLAIN, 14));
        JScrollPane scrollPane = new JScrollPane(inputArea);
        wordCountLabel = new JLabel("Word Count: 0");
        countButton = new JButton("Count Words");
        countButton.addActionListener(this);
        JPanel contentPanel = new JPanel();
        contentPanel.setLayout(new BorderLayout());
        contentPanel.add(scrollPane, BorderLayout.CENTER);
        contentPanel.add(wordCountLabel, BorderLayout.SOUTH);
        getContentPane().add(contentPanel, BorderLayout.CENTER);
        getContentPane().add(countButton, BorderLayout.SOUTH);
        setSize(500, 300);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == countButton) {
            String text = inputArea.getText();
            String[] words = text.split("\\s+");
            int wordCount = words.length;
            wordCountLabel.setText("Word Count: " + wordCount);
        }
    }
    public static void main(String[] args) {
        new WordCounterApp();
    }
}
