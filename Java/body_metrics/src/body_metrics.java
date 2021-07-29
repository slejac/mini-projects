import javax.swing.*;

public class body_metrics {
    public static void main(String[] args) {
        int flag = 1;
        while (flag == 1) {
            int selection = prompt();
            if (selection == 0) {
                bmi();
                flag = iterate();
            } else if (selection == 1) {
                bmr();
                flag = iterate();
            } else {
                JOptionPane.showMessageDialog(null, "Thank you using the Body Metrics Calculator!");
                flag = 0;
            }
        }
    }

    public static int prompt () {
        String[] choices = {"BMI", "BMR", "Exit"};
        int value = JOptionPane.showOptionDialog(null, "Select an option below",
                "Body Metrics", JOptionPane.DEFAULT_OPTION, JOptionPane.QUESTION_MESSAGE,
                null, choices, choices[0]);
        return value;
    }

    public static void bmi () {
        float height = Float.parseFloat(JOptionPane.showInputDialog("Enter your height in inches:"));
        float weight = Float.parseFloat(JOptionPane.showInputDialog("Enter your weight in pounds:"));
        float result = ((weight/height)/height)*703;
        String answer = "Your BMI is " + String.valueOf(result);
        JOptionPane.showMessageDialog(null, answer);

    }

    public static void bmr () {
        String[] choices = {"Male", "Female"};
        int gender = JOptionPane.showOptionDialog(null, "Select a gender below",
                "BMR Calculation", JOptionPane.DEFAULT_OPTION, JOptionPane.QUESTION_MESSAGE,
                null, choices, choices[0]);
        float height = Float.parseFloat(JOptionPane.showInputDialog("Enter your height in inches:"));
        float weight = Float.parseFloat(JOptionPane.showInputDialog("Enter your weight in pounds:"));
        float age = Float.parseFloat(JOptionPane.showInputDialog("Enter your age in years:"));
        if (gender == 0) {
            double result = ((4.536*weight) + (15.88*height) - (5*age) + 5);
            String answer = "Your BMR is " + String.valueOf(result) + " calories per day";
            JOptionPane.showMessageDialog(null, answer);
        } else {
            double result = ((4.536*weight) + (15.88*height) - (5*age) - 161);
            String answer = "Your BMR is " + String.valueOf(result) + " calories per day";
            JOptionPane.showMessageDialog(null, answer);
        }
    }

    public static int iterate() {
        String[] options = {"Yes", "No"};
        int val = JOptionPane.showOptionDialog(null,
                "Would you like to use the calculator again?", "Body Metrics",
                JOptionPane.DEFAULT_OPTION, JOptionPane.QUESTION_MESSAGE, null, options, options[0]);
        return ++val;
    }
}