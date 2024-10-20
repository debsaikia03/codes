import java.util.Scanner;

public class SumFloat {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter a number: ");
        Float a = s.nextFloat();

        System.out.print("Enter second number: ");
        Float b = s.nextFloat();

        Float sum = a + b;

        System.out.println("\nSum= " + sum);

        s.close();
    }
}
