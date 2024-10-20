import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class RegistrationForm extends JFrame implements ActionListener {

    JLabel titleLabel, nameLabel, mobileLabel, genderLabel, dobLabel, addressLabel, termsLabel;
    JTextField nameField, mobileField, dobField, addressField;
    JRadioButton maleRadioButton, femaleRadioButton;
    ButtonGroup genderButtonGroup;
    JCheckBox termsCheckbox;
    JButton submitButton, resetButton;
    JPanel panel,pn1,panel2;
    JTextArea area;

    

    public RegistrationForm() {
        titleLabel = new JLabel("Registration Form");
        nameLabel = new JLabel("Name");
        mobileLabel = new JLabel("Mobile");
        genderLabel = new JLabel("Gender");
        dobLabel = new JLabel("DOB");
        addressLabel = new JLabel("Address");
        termsLabel = new JLabel("Accept Terms And Conditions");
    
        nameField = new JTextField();
        mobileField = new JTextField();
        dobField = new JTextField();
        addressField = new JTextField();
    
        maleRadioButton = new JRadioButton("Male");
        femaleRadioButton = new JRadioButton("Female");
    
        genderButtonGroup = new ButtonGroup();
        genderButtonGroup.add(maleRadioButton);
        genderButtonGroup.add(femaleRadioButton);
    
        termsCheckbox = new JCheckBox();
    
        submitButton = new JButton("Submit");
        submitButton.addActionListener(this);  // Register button with action listener
    
        resetButton = new JButton("Reset");
        resetButton.addActionListener(this);  // Register button with action listener

        // area.setFont(new Font("Comic Sans Ms", Font.BOLD, 21));
        area = new JTextArea();
        area.setLineWrap(true);
        area.setEditable(false);

        pn1 = new JPanel(new GridLayout(1,2,5,5));
        pn1.setSize(500, 500);
    
        panel = new JPanel(new GridLayout(10, 2, 5, 5));  // Set layout manager
        panel.setBounds(400,80,100,100);
        panel.setBackground(Color.gray);

        panel2 = new JPanel(new GridLayout(1, 1, 5, 5));
        panel2.setBounds(40,80,100,100);
        panel2.setBackground(Color.gray);
    
        // Add components to the panel
        panel.add(titleLabel);
        panel.add(new JLabel());  // Empty label for spacing
        panel.add(nameLabel);
        panel.add(nameField);
        panel.add(mobileLabel);
        panel.add(mobileField);
        panel.add(genderLabel);
        panel.add(maleRadioButton);
        panel.add(new JLabel());   // Empty label for spacing
        panel.add(femaleRadioButton);
        panel.add(dobLabel);
        panel.add(dobField);
        panel.add(addressLabel);
        panel.add(addressField);
        panel.add(termsLabel);
        panel.add(termsCheckbox);
        panel.add(submitButton);
        panel.add(resetButton);
        panel2.add(area);

    
        // Add panel to the frame and set frame properties
        pn1.add(panel);
        pn1.add(panel2);
        add(pn1);
        setTitle("Registration Form");
        setSize(500, 500);
        setLocationRelativeTo(null);  // Center the frame on screen
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
    

    @Override
public void actionPerformed(ActionEvent e) {
    if (e.getSource() == submitButton) {
        String name = nameField.getText();
        String mobile = mobileField.getText();
        String dobString = dobField.getText();

        // Validate mobile number
        if (mobile.length() != 10 || !mobile.matches("\\d+")) {
            area.setText("Invalid mobile number");
            return;
        }

        // Validate date of birth
        SimpleDateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");
        try {
            Date dob = dateFormat.parse(dobString);
            Date cutoffDate = dateFormat.parse("01-01-2010");
            if (dob.after(cutoffDate)) {
                area.setText("DOB must be before 1st Jan 2010");
                return;
            }
        } catch (ParseException ex) {
            area.setText("Invalid date format for DOB");
            return;
        }

        // Display entered data
        area.setText("Name: " + name + "\n Mobile: " + mobile + "\n DOB: " + dobString);
    }
    else if (e.getSource() == resetButton) {
        // Handle reset button click
        //  - Clear form fields
        nameField.setText("");
        mobileField.setText("");
        genderButtonGroup.clearSelection();
        dobField.setText("");
        addressField.setText("");
        termsCheckbox.setSelected(false);
    }
}

public static void main(String[] args) {
    new RegistrationForm();
}

}
