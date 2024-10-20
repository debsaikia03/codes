import java.util.Scanner;

public class Display {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter name: ");
        String name = s.nextLine();

        System.out.println("Enter roll no.:");
        int roll = s.nextInt();

        System.out.println("Enter section:");
        int sec = s.nextInt();

        System.out.println("Enter branch:");
        String branch = s.next();

        s.close();

        System.out.println();
        System.out.println("Name:" + name);
        System.out.println("Roll No.:" + roll);
        System.out.println("Section:" + sec);
        System.out.println("Branch:" + branch);
}
}


