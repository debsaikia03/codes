class newThread1 implements Runnable{
    String name;
    newThread1(String s){
        name = s;
    }
    public void run() {
        try{
            for(int i=5; i>0; i--){
                System.out.println(name);
                Thread.sleep(500);
            }
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}

class newThread2 implements Runnable{
    String name;

    newThread2(String s){
        name = s;
    }

    @Override
    public void run() {
        try{
            for(int i=5; i>0; i--){
                System.out.println(name);
                Thread.sleep(500);
            }
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}


public class ThreadCreate3 {
    public static void main(String[] args) {
        newThread1 nt1 = new newThread1("MyThread1");
        Thread t1 = new Thread(nt1);

        newThread1 nt2 = new newThread1("MyThread2");
        Thread t2 = new Thread(nt2);

        t1.start();
        t2.start();
    }
}
