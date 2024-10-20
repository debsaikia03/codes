import java.util.Scanner;

public class InsertionSort {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Enter no. of elements: ");

        int n = s.nextInt();

        int[] arr = new int[n];

        System.out.print("Enter elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }

        s.close();

        int j, temp;
        for (int i = 1; i < n; i++) {
            temp = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = temp;
        }

        for (int i = 0; i < n; i++) {
            System.out.print(" " + arr[i]);
        }

    }
}
