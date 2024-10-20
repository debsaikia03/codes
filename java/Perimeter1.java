import java.util.Scanner;

public class Perimeter1{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt user for input
        System.out.print("Enter the length of the rectangle: ");
        double length = scanner.nextDouble();

        System.out.print("Enter the breadth of the rectangle: ");
        double breadth = scanner.nextDouble();

        // Calculate perimeter
        double perimeter = calculatePerimeter(length, breadth);

        // Display the result
        System.out.println("The perimeter of the rectangle is: " + perimeter);

        // Close the scanner
        scanner.close();
    }

    // Function to calculate perimeter
    private static double calculatePerimeter(double length, double breadth) {
        return 2 * (length + breadth);
    }
}

