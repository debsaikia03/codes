public class ThreadCreate1 {
    public static void main(String[] args) {

        Thread t = Thread.currentThread();

        t.setName("My Thread");

        System.out.println(t);
    }
}
