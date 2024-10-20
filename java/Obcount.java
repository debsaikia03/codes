class Object{
    static int count =0;
    void ObjectCount(){
        count++;
    }
    void printInfo(){
        System.out.println(count);
    }
}

public class Obcount {
    public static void main(String[] args) {
        Object a1 = new Object();
        Object b1 = new Object();
        Object c1 = new Object();

        a1.ObjectCount();
        b1.ObjectCount();
        c1.ObjectCount();

        a1.printInfo();
    }
}
