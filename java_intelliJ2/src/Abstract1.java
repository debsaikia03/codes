import java.util.Scanner;

abstract class Student {
    int rollNo;
    int regNo;

    abstract void course();

    abstract void getInput();
}

class Kiitian extends Student {
    public Kiitian(int roll, int reg) {

        this.rollNo = roll;
        this.regNo = reg;
    }
    void getInput(){

    }
    void course() {

        System.out.println("Course: B.Tech in Computer Science");
    }
}

public class Abstract1 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter roll no.: ");
        int ro = s.nextInt();

        System.out.println("Enter reg no.: ");
        int re = s.nextInt();

        Kiitian s1 = new Kiitian(ro, re);

        System.out.println("Roll No: " + s1.rollNo);
        System.out.println("Reg No: " + s1.regNo);
        s1.course();
    }
}
