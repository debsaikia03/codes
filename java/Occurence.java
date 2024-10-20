import java.util.Scanner;

public class Occurence {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter no. of elements: ");
        int n = s.nextInt();

        int [] arr = new int[n];

        System.out.println("Enter the elements: ");
        for(int i=0; i<n; i++)
        {
            arr[i] = s.nextInt();
        }

        s.close();

        int c;

        for(int i=0; i<n; i++){
            if(arr[i] != -1){
               c = 1;

               for(int j=i+1; j<n; j++){
                  if(arr[i] == arr[j]){
                    c++;
                    arr[j] = -1;
                  }
                }

                System.out.println("Occurence of " + arr[i] + ": " + c);
            }
        }
    }
}      

