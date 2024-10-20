import java.util.Scanner;

public class Array1D {
    public static void main(String[] args) 
    {
        int [] arr = new int[10];

        Scanner s = new Scanner(System.in);
        

        for(int i=0; i<10; i++)
        {
            arr[i] = s.nextInt();
        }

        s.close();

        for(int i=0; i<10; i++)
        {
          System.out.println(arr[i]);
        }
    }
}
