import java.util.Scanner;

public class Array1D1 {
    public static void main(String[] args) 
    {
        int [] arr = new int[10];

        Scanner s = new Scanner(System.in);
        

        for(int i: arr)
        {
            arr[i] = s.nextInt();
        }

        s.close();

        for(int i: arr)
        {
          System.out.println(arr[i]);
        }
    }
}

