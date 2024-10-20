import java.util.Scanner;

public class Switch 
{
    public static void main(String[] args) 
    {
        System.out.print("Enter your age: ");

        Scanner s = new Scanner(System.in);
        int age = s.nextInt();
        
        s.close();

        switch(age)
        {
            case 18:
                System.out.println("You're going to college");
                break;

            case 22:
                System.out.println("You graduated!");
                break;

            default:
                System.out.println("Enjoy!");
        }
    }
}
