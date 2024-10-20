class MyThread1 extends Thread{
    public void run(){
        try{
        while(true){
        for(int i=0;i<5;i++){
            System.out.println("Thread1 invoked!");
            Thread.sleep(1000);
        }
        }   
    } catch(InterruptedException e){
        System.out.println(e);
    }
    }
}


class MyThread2 extends Thread{
    public void run(){
        try{
        while(true){
            for(int i=0;i<5;i++){
                System.out.println("Thread2 invoked!");
                Thread.sleep(1000);
            }
        }
    }catch(InterruptedException e){
        System.out.println(e);
    }
    }   
}

public class Thread2{
    public static void main(String[] args) {
        MyThread1 t1 = new MyThread1();
        MyThread2 t2 = new MyThread2();

        t1.start();
        t2.start();
    }
}

