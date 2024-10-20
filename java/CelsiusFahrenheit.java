import java.util.Scanner;

public class CelsiusFahrenheit {
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        System.out.print("Enter temperature in Celsius: ");
        double c = s.nextDouble();

        double f = (c * 9 / 5) + 32;

        System.out.println("Temperature in Fahrenheit: " + f);

        s.close();
    }
}
