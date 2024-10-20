class MyThread1 extends Thread{
    @Override
    public void run() {
        while(true) {
            try{
                System.out.println("Thread1 invoked!");
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class MyThread2 extends Thread{
    @Override
    public void run() {
        while(true) {
            try{
                  System.out.println("Thread2 invoked!");
                  Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class ThreadCreate5 {
    public static void main(String[] args) {
        MyThread1 t1 = new MyThread1();
        MyThread2 t2 = new MyThread2();

        t1.start();
        t2.start();
    }
}
