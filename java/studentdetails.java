class Student {
    String name;
    int age;

    public void printInfo() {
        System.out.println(this.name);
        System.out.println(this.age);
    }

    Student(){
    System.out.println("Non-parameterized constructor called!");
    }
}

public class studentdetails {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Sam";
        s1.age = 12;

        Student s2 = new Student();
        s2.name = "Tom";
        s2.age = 15;

        Student s3 = new Student();
        s3.name = "Nirvaan";
        s3.age = 9;

        Student s4 = new Student();
        s4.name = "Kanav";
        s4.age = 10;

        Student s5 = new Student();
        s5.name = "Bibhas";
        s5.age = 36;
      
        Student s6 = new Student();
        s6.name = "Jerry";
        s6.age = 11;

        Student s7 = new Student();
        s7.name = "Piki";
        s7.age = 57;

        Student s8 = new Student();
        s8.name = "Rainbowblue";
        s8.age = 20;

        Student s9 = new Student();
        s9.name = "Andy";
        s9.age = 43;

        s1.printInfo();
        s2.printInfo();
        s3.printInfo();
        s4.printInfo();
        s5.printInfo();
        s6.printInfo();
        s7.printInfo();
        s8.printInfo();
        s9.printInfo();

        System.out.println("Kanav is naughty in school.");
        System.out.println("My sister had alot of fun at school.");
    }
}
