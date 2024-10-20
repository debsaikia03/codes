class newThread implements Runnable{
    Thread t;
    String name;

    newThread(String s){
        name = s;
        t = new Thread(this, name);
        System.out.println(t);
    }

    public void run(){
        try{
        for(int i=0; i<5; i++){
            System.out.println(name + i);
            Thread.sleep(1000);
        }
    }catch(InterruptedException e){
        System.out.println(e);
    }
    }
}

public class Thread1{
    public static void main(String[] args) {
        newThread nt = new newThread("My Thread");

        nt.t.start();

        try{
            for(int i=0; i<5; i++){
                System.out.println("main" + i);
                Thread.sleep(1000);
            }
        }catch(InterruptedException e){
            System.out.println(e);
        }
    }
}