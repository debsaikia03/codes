import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Stopwatch extends JFrame implements ActionListener {
    private JLabel hoursLabel, minutesLabel, secondsLabel, millisecondsLabel;
    private JButton startButton, stopButton, resetButton;
    private Timer timer;
    private int hours, minutes, seconds, milliseconds;

    public Stopwatch() {
        setTitle("Stopwatch");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Initialize components
        hoursLabel = new JLabel("00:");
        minutesLabel = new JLabel("00:");
        secondsLabel = new JLabel("00:");
        millisecondsLabel = new JLabel("000");
        startButton = new JButton("Start");
        stopButton = new JButton("Stop");
        resetButton = new JButton("Reset");

        // Add action listeners
        startButton.addActionListener(this);
        stopButton.addActionListener(this);
        resetButton.addActionListener(this);

        // Layout setup
        JPanel timePanel = new JPanel(new GridLayout(1, 4));
        timePanel.add(hoursLabel);
        timePanel.add(minutesLabel);
        timePanel.add(secondsLabel);
        timePanel.add(millisecondsLabel);

        JPanel buttonPanel = new JPanel(new GridLayout(1, 3));
        buttonPanel.add(startButton);
        buttonPanel.add(stopButton);
        buttonPanel.add(resetButton);

        setLayout(new BorderLayout());
        add(timePanel, BorderLayout.CENTER);
        add(buttonPanel, BorderLayout.SOUTH);

        // Initialize timer
        timer = new Timer(1, this);
        hours = minutes = seconds = milliseconds = 0;

        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == startButton) {
            timer.start();
        } else if (e.getSource() == stopButton) {
            timer.stop();
        } else if (e.getSource() == resetButton) {
            timer.stop();
            hours = minutes = seconds = milliseconds = 0;
            updateLabels();
        } else if (e.getSource() == timer) {
            milliseconds++;
            if (milliseconds >= 1000) {
                milliseconds = 0;
                seconds++;
                if (seconds >= 60) {
                    seconds = 0;
                    minutes++;
                    if (minutes >= 60) {
                        minutes = 0;
                        hours++;
                    }
                }
            }
            updateLabels();
        }
    }

    private void updateLabels() {
        hoursLabel.setText(String.format("%02d:", hours));
        minutesLabel.setText(String.format("%02d:", minutes));
        secondsLabel.setText(String.format("%02d:", seconds));
        millisecondsLabel.setText(String.format("%03d", milliseconds));
    }

    public static void main(String[] args) {
        new Stopwatch();
    }
}

