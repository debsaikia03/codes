class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(name);
        System.out.println(age);
    }

    Student(Student s2){
       this.name = s2.name;      
       this.age = s2.age;       //Constructor created
    }

    Student(){

    }
}

public class studentde{
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Aman";
        s1.age = 19;

        Student s2 = new Student(s1);         //Copy Constructor
        s2.printInfo();
    }
    
}
