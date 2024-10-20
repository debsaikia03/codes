import java.util.Scanner;

public class AreaCircle {
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        System.out.print("Enter radius of circle: ");
        Float r = s.nextFloat();
 
        s.close();

        float pi = 3.14f;

        float a = pi * r * r;

        System.out.print("Area of the circle: " + a);
    }
}
