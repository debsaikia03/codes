import java.util.Scanner;

public class IfElse 
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int a = s.nextInt(); 

        s.close();

        if(a >= 18)
        {
            System.out.println("You're eligible!");
        }
        
        else
        {
            System.out.println("You're not eligible!");
        }
    }
}
