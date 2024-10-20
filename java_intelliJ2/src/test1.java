class Aa{
    public void display(){
        System.out.println("I am 21!");
    }
}

class B extends Aa{
    public void display(){
        super.display();
        System.out.println("Hello!");
    }
}
public class test1 {
    public static void main(String[] args) {
        B b1 = new B();

        b1.display();
    }
}
