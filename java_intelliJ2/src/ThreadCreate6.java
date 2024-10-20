class A extends Thread{
    synchronized void callThread(String msg){

        System.out.print("[" + msg + "1");

        try{
            Thread.sleep(1000);
        }
        catch(InterruptedException e){
            System.out.println("Interrupted!");
        }
        System.out.println("]");
    }
}

class B extends Thread{
    synchronized void callThread(String msg){
        System.out.print("[" + msg + "2");

        try{
            Thread.sleep(500);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }

        System.out.println("]");
    }
}

public class ThreadCreate6{
    public static void main(String[] args) {

        String s = "msg";

        A a1 = new A();
        a1.callThread(s);

        B b1 = new B();
        b1.callThread(s);
    }
}
