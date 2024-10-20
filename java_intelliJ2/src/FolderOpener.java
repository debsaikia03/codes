import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.File;

public class FolderOpener extends JFrame implements ActionListener {
    JButton openButton;
    JList<String> listView;
    public FolderOpener() {
        super("Folder Opener");
        openButton = new JButton("Open Folder");
        listView = new JList<>();
        openButton.addActionListener(this);
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());
        panel.add(openButton, BorderLayout.NORTH);
        panel.add(new JScrollPane(listView), BorderLayout.CENTER);
        add(panel);
        pack();
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == openButton) {
            JFileChooser fileChooser = new JFileChooser();
            fileChooser.setFileSelectionMode(JFileChooser.DIRECTORIES_ONLY);
            int returnVal = fileChooser.showOpenDialog(this);
            if (returnVal == JFileChooser.APPROVE_OPTION) {
                File selectedFolder = fileChooser.getSelectedFile();
                File[] contents = selectedFolder.listFiles();
                String[] contentNames = new String[contents.length];
                for (int i = 0; i < contents.length; i++) {
                    contentNames[i] = contents[i].getName();
                }
                listView.setListData(contentNames);
            }
        }
    }
    public static void main(String[] args) {
        new FolderOpener();
    }
}
