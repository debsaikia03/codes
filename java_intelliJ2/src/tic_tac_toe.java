import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class tic_tac_toe implements ActionListener {
  private JFrame frame;
  private JPanel panel;
  private JButton[] buttons = new JButton[9];
  private boolean xTurn = true;
  public tic_tac_toe() {
    frame = new JFrame("Tic-Tac-Toe");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    panel = new JPanel();
    panel.setLayout(new GridLayout(3, 3));
    panel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
    for (int i = 0; i < 9; i++) {
      buttons[i] = new JButton();
      buttons[i].setFont(new Font("Arial", Font.PLAIN, 40));
      buttons[i].addActionListener(this);
      panel.add(buttons[i]);
    }
    frame.add(panel, BorderLayout.CENTER);
    frame.setSize(400, 400);
    frame.setVisible(true);
  }
  public void actionPerformed(ActionEvent e) {
    JButton button = (JButton) e.getSource();
    if (xTurn) {
      button.setText("X");
    } else {
      button.setText("O");
    }
    button.setEnabled(false);
    xTurn = !xTurn;
    checkForWinner();
  }
  public void checkForWinner() {
    for (int i = 0; i < 9; i += 3) {
      if (checkRowCol(i) || checkRowCol(i % 3)) {
        return;
      }
    }
    if (checkDiagonal(0) || checkDiagonal(2)) {
      return;
    }
    boolean tie = true;
    for (JButton button : buttons) {
      if (button.isEnabled()) {
        tie = false;
        break;
      }
    }
    if (tie) {
      JOptionPane.showMessageDialog(frame, "Tie game!");
      resetGame();
    }
  }
  private boolean checkRowCol(int start) {
    String text = buttons[start].getText();
    if (!text.isEmpty() && text.equals(buttons[start + 1].getText()) && text.equals(buttons[start + 2].getText())) {
      JOptionPane.showMessageDialog(frame, text + " wins!");
      resetGame();
      return true;
    }
    return false;
  }
  private boolean checkDiagonal(int start) {
    String text = buttons[start].getText();
    if (!text.isEmpty() && text.equals(buttons[4].getText()) && text.equals(buttons[start == 0 ? 8 : 6].getText())) {
      JOptionPane.showMessageDialog(frame, text + " wins!");
      resetGame();
      return true;
    }
    return false;
  }
  public void resetGame() {
    for (JButton button : buttons) {
      button.setText("");
      button.setEnabled(true);
    }
    xTurn = true;
  }
  public static void main(String[] args) {
    new tic_tac_toe();
  }
}
