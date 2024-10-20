interface A{
    default void display(){
        System.out.println("A");
    }
}
interface B{
    default void display(){
        System.out.println("B");
    }
}
class C implements A,B{
    public void display(){
        System.out.println("C");
        B.super.display();
        A.super.display();
    }
    
}
public class MultipleInterface extends C{
    public static void main(String[] args) {
        C r=new C();
        r.display();
    }
}
