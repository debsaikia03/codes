import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {

        int[] arr = new int[10];

        Scanner s = new Scanner(System.in);

        System.out.println("Enter 10 numbers: ");
        for (int i = 0; i < 10; i++) {
            arr[i] = s.nextInt();
        }

        s.close();

        int j = 0, k = 0;

        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 == 0) {
                j++;
            } else {
                k++;
            }
        }

        System.out.print("\nNo. of odd numbers is: " + j);
        System.out.print("\nNo. of even numbers is: " + k);

    }

}
