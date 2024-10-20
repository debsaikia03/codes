import java.util.Scanner;

public class Array2D {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter no. of rows: ");
        int a = s.nextInt();

        System.out.print("Enter no. of columns: ");
        int b = s.nextInt();

        int[][] matrix = new int[a][b];

        System.out.println("Enter array elements:");

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                matrix[i][j] = s.nextInt();
            }
        }

        s.close();

        System.out.println("Given array elements:");

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.format("%d ", matrix[i][j]);
            }
            System.out.println();
        }
    }
}
