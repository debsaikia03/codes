import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class StopWatch1 extends JFrame {
    private JLabel timerLabel;
    private JButton startButton;
    private JButton stopButton;
    private JButton resetButton;
    private long startTime;
    private boolean running;

    public StopWatch1() {
        setTitle("Stopwatch");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        timerLabel = new JLabel("00:00:00");
        timerLabel.setFont(new Font("Arial", Font.PLAIN, 24));
        add(timerLabel);

        startButton = new JButton("Start");
        startButton.addActionListener(new StartListener());
        add(startButton);

        stopButton = new JButton("Stop");
        stopButton.addActionListener(new StopListener());
        add(stopButton);

        resetButton = new JButton("Reset");
        resetButton.addActionListener(new ResetListener());
        add(resetButton);

        setVisible(true);
    }

    private void updateTimerLabel(long elapsedTime) {
        long milliseconds = elapsedTime % 1000;
        long seconds = (elapsedTime / 1000) % 60;
        long minutes = (elapsedTime / (1000 * 60)) % 60;
        long hours = (elapsedTime / (1000 * 60 * 60)) % 24;
        String time = String.format("%02d:%02d:%02d.%03d", hours, minutes, seconds, milliseconds);
        timerLabel.setText(time);
    }

    private class StartListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (!running) {
                startTime = System.currentTimeMillis();
                running = true;
                new Thread(new UpdateTimer()).start();
            }
        }
    }

    private class StopListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            running = false;
        }
    }

    private class ResetListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            running = false;
            updateTimerLabel(0);
        }
    }

    private class UpdateTimer implements Runnable {
        public void run() {
            while (running) {
                long elapsedTime = System.currentTimeMillis() - startTime;
                updateTimerLabel(elapsedTime);
                try {
                    Thread.sleep(10); // update timer every 10 milliseconds
                } catch (InterruptedException ex) {
                    ex.printStackTrace();
                }
            }
        }
    }

    public static void main(String[] args) {
        new StopWatch1();
    }
}