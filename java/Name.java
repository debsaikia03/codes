import java.util.Scanner;

public class Name {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Enter first name: ");
        String name1 = s.next();

        System.out.print("Enter last name: ");
        String name2 = s.next();

        System.out.println();
        System.out.println(name1 +" "+ name2);

        s.close();
    }
}
