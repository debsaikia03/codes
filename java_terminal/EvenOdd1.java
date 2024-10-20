import java.util.Scanner;

public class EvenOdd1 {
    public static void main(String[] args) {

     int j = 0, k = 0;

        for (int i = 0; i < 10; i++) {
          int a=Integer.parseInt(args[i]);
            if (a % 2 == 0) {
                j++;
            } else {
                k++;
            }
        }

        System.out.print("\nNo. of odd numbers is: " + j);
        System.out.print("\nNo. of even numbers is: " + k);

    }

}
