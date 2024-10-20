import java.util.Scanner;

public class SumOfDiagonals {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter an element for a square matrix: ");
        int n = s.nextInt();

        int[][] arr = new int[n][n];

        System.out.println("Enter elements for " + n + "X" + n + " matrix: ");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = s.nextInt();
            }
        }

        s.close();

        int left = 0, right = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    left += arr[i][j];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            right += arr[i][n - 1 - i];
        }

        System.out.println("Sum of left diagonal elements: " + left);
        System.out.println("Sum of right diagonal elements: " + right);
    }
}
