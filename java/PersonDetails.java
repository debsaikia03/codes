import java.util.Scanner;

class Account{
    int acc_no;
    double bal;

    void input(){
        Scanner s = new Scanner(System.in);

        System.out.print("Enter account no.: ");
        acc_no = s.nextInt();

        System.out.print("Enter balance amount in Rs.: ");
        bal = s.nextDouble();

        s.close();
    }
    
    void display(){
        System.out.printf("Account No.: %d",acc_no);
        System.out.printf("Balance amount in Rs.: %.2f",bal);
    }
}

class Person extends Account{
    String name;
    int aadhar_no;

    @Override
    void input() {
        super.input();

        Scanner s = new Scanner(System.in);

        System.out.println("Enter name: ");
        name = s.next();
        
        System.out.println("Enter Aaadhar no.: ");
        aadhar_no = s.nextInt();

        s.close();
    }

    @Override
    void display(){
        super.display();
        System.out.println("Name: "+name);
        System.out.printf("Adhaar No.: %d",aadhar_no);
    }
}


public class PersonDetails {
    public static void main(String[] args) {
        Person[] p = new Person[3];
        
        for(int i=0; i<3; i++){
            System.out.printf("Enter detail for Person %d:\n",i+1);
            p[i] = new Person();
            p[i].input();
            p[i].display();
            System.out.println();
        }
    }
}
