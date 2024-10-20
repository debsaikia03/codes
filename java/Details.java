import java.util.Scanner;

class Acc {
    long acc_no;
    double bal;

    void input(){
        Scanner s = new Scanner(System.in);

        System.out.println("Enter Account No.: ");
        acc_no= s.nextLong();

        System.out.println("Enter Balance Amount: ");
        bal = s.nextDouble();

        s.close();
    }

    void disp(){
        System.out.println("Account No.: " +acc_no);
        System.out.println("Balance Amount: "+bal);
    }
}

class Person extends Acc {
    String name;
    long aadhar_no;

    void input(){
        super.input();
        Scanner s = new Scanner(System.in);

        System.out.println("Enter name: ");
        name= s.nextLine();

        System.out.println("Enter Aadhar No.: ");
        aadhar_no= s.nextLong();

        s.close();
    }

    void disp(){
        super.disp();
        System.out.println("Name: "+name);
        System.out.println("Aadhar No.: "+aadhar_no);
    }

}

public class Details{
    public static void main(String[] args) {
        Person[] p = new Person[3];
         
        for(int i=0; i<3; i++){
            System.out.println("Enter details for Person "+i+1+":");
            p[i]= new Person();
            p[i].input();
            p[i].disp();
            System.out.println();
        }
    }
}