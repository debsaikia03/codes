import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int n = s.nextInt();

        s.close();

        int r = 0, o;

        o = n;

        do {
            r = r * 10 + n % 10;
            n = n / 10;
        } while (n != 0);

        if (r == o)
            System.out.print(r + " is a palindrome.");

        else
            System.out.print(r + " is not a palindrome.");
    }
}
