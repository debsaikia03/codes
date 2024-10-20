class newThread implements Runnable{
    Thread t;
    String name;

    newThread(String s){
        name = s;
        t = new Thread(this,name); //object of the class implementing runnable
        System.out.println(t);
    }

    @Override
    public void run() {
        try{
            for(int i=5; i>0; i--){
                System.out.println(name + i);
                Thread.sleep(500);
            }
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}


public class ThreadCreate4 {
    public static void main(String[] args) {
        newThread nt = new newThread("myThread");

        nt.t.start();

        try {
            for (int i = 5; i > 0; i--) {
                System.out.println("Main" + i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }

    }
}

