import java.util.Scanner;

public class UserInput 
{
    public static void main(String[] args)
    {
        System.out.println("Taking input from user");

        Scanner s = new Scanner(System.in);

        System.out.print("Enter number 1: ");
        int a = s.nextInt();

        System.out.print("Enter number 2: ");
        int b = s.nextInt();

        s.close();
        
        int sum= a+b;

        System.out.print("Sum of these two numbers is: ");
        System.out.println(sum);
    }
}
