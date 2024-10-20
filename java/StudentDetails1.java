import java.util.Scanner;

class Student{
    int roll;
    double cgpa;
    String name;

    Student(int r, double g, String name){
        roll=r;
        cgpa=g;
        this.name=name;
    }
    void display(){
        System.out.println("NAME: "+name);
        System.out.println("Roll: "+roll);
        System.out.println("CGPA: "+cgpa);
    }
}

class detail{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of students: ");
        int n= sc.nextInt();
        Student data[]= new Student[n];
        int r; double c; String name;
        for(int i=0; i<n; i++){
            System.out.println("Enter "+(i+1)+" student's data");
            System.out.print("Enter roll number: ");
            r=sc.nextInt();
            System.out.print("Enter you cgpa: ");
            c=sc.nextDouble();
            System.out.print("Enter your name: ");
            name = sc.next();
            data[i]= new Student(r, c, name);
        }

        for(int i=0; i<n; i++){
            System.out.println((i+1)+" Student's data");
            data[i].display();
        }
        sc.close();
}
}
