class CountThread extends Thread {
    String threadName;
    int lowerRange;
    int upperRange;

    public CountThread(String threadName, int lowerRange, int upperRange) {
        this.threadName = threadName;
        this.lowerRange = lowerRange;
        this.upperRange = upperRange;
    }

    public void run() {
        System.out.println("Thread - " + threadName);
        try {
            for (int i = lowerRange; i <= upperRange; i++) {
                System.out.print(i + " ");
                Thread.sleep(5);
            }
        } catch (InterruptedException e) {
            System.out.println("Thread " + threadName + " interrupted.");
        }
    }
}

public class ThreadCreate7 {
    public static void main(String[] args) {
        String threadName = "First";
        int lowerRange = 10;
        int upperRange = 15;

        CountThread thread = new CountThread(threadName, lowerRange, upperRange);
        thread.start();
    }
}
