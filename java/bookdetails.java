class book {
    String name;
    int page;

    public void printInfo() {
        System.out.println(this.name);
        System.out.println(this.page);
    }

    book(String name, int page) {
        System.out.println("Parameterized constructor called!");
        this.name = name;
        this.page = page;
    }

    book(){
        this.name="Tree";
        this.page= 432;
    }
}

public class bookdetails {
    public static void main(String[] args) {
        book b1 = new book("The Cherry Tree", 200);
        b1.printInfo();

        book b3 = new book();
        b3.printInfo();
    }
}