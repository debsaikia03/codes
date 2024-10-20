import java.util.Scanner;
interface Employee1{
    void getDetails(int Empid, String Ename);
}

interface Manager1 extends Employee1 {
    void getDeptDetails(int Deptid, String Dname);
}

class Head implements Manager1{
    public void getDetails(int Empid, String Ename){
        System.out.println("Employee ID: "+ Empid);
        System.out.println("Employee name: "+ Ename);
    }

    public void getDeptDetails(int Deptid, String Dname){
        System.out.println("Department ID: "+ Deptid);
        System.out.println("Department name: "+ Dname);
    }
}

public class Abstract4 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        Head h1 = new Head();

        System.out.println("Enter Employee ID: ");
        int Empid = s.nextInt();

        System.out.println("Enter Employee name: ");
        String Ename = s.next();

        System.out.println("Enter Department ID: ");
        int Deptid = s.nextInt();

        System.out.println("Enter Department name: ");
        String Dname = s.next();

        System.out.println();
        h1.getDetails(Empid, Ename);
        h1.getDeptDetails(Deptid, Dname);
    }
}

