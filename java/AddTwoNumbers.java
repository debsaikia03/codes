import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");

        double number1 = scanner.nextDouble();

        System.out.print("Enter the second number: ");

        double number2 = scanner.nextDouble();

        scanner.close();

        double sum = number1 + number2;

        System.out.println("The sum of " + number1 + " and " + number2 + " is: " + sum);
    }
}
