public class ThreadCreate2 {
    public static void main(String[] args) {
        Thread t =  Thread.currentThread();

        try{
            for(int i=5; i>0; i--){
                System.out.println(i);
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e){
            System.out.println("Exception occured!");
            System.out.println(e);
        }
    }
}
