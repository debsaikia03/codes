import java.util.Scanner;

public class MetreCentimetre{
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
 
        System.out.print("Enter length in metre: ");
        float m = s.nextInt();

        float cm1 =  m * 100;

        System.out.println("The length in centimetre: " + cm1);

        System.out.print("\nEnter length in centimetre: ");
        float cm = s.nextInt();

        float m1 = cm / 100;
 
        System.out.println("The length in metre: " + m1);

        s.close();
    }
}