import java.util.Scanner;

public class Largest3 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter 3 numbers: ");
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

        s.close();

        int max = 0;

        if (b > a && b > c) {
            max = b;
        }

        else if (a > b && a > c) {
            max = a;
        }

        else
            max = c;

        System.out.println("Largest amoung 3 numbers is: " + max);

    }
}
