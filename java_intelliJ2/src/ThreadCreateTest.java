class NumberPrinter implements Runnable {
    private final int start;
    private final int end;
    private final boolean isEven;
    private final SharedArray sharedArray;

    public NumberPrinter(int start, int end, boolean isEven, SharedArray sharedArray) {
        this.start = start;
        this.end = end;
        this.isEven = isEven;
        this.sharedArray = sharedArray;
    }

    @Override
    public void run() {
        synchronized (sharedArray) {
            for (int i = start; i <= end; i += 2) {
                if ((i % 2 == 0 && isEven) || (i % 2 != 0 && !isEven)) {
                    sharedArray.addElement(i);
                }
            }
            sharedArray.notify(); // Notify the other thread that this thread has finished its task
        }
    }
}

class SharedArray {
    private final int[] arr;
    private int currentIndex;
    private final int totalNumbers;

    public SharedArray(int totalNumbers) {
        this.arr = new int[totalNumbers];
        this.currentIndex = 0;
        this.totalNumbers = totalNumbers;
    }

    public void addElement(int num) {
        arr[currentIndex] = num;
        currentIndex++;
    }

    public boolean isFull() {
        return currentIndex == totalNumbers;
    }

    public int[] getArray() {
        return arr;
    }
}

public class ThreadCreateTest {
    public static void main(String[] args) throws InterruptedException {
        int totalNumbers = 100;
        SharedArray sharedArray = new SharedArray(totalNumbers);

        Thread t1 = new Thread(new NumberPrinter(1, totalNumbers, false, sharedArray)); // Odd numbers
        Thread t2 = new Thread(new NumberPrinter(2, totalNumbers, true, sharedArray)); // Even numbers

        t1.start();
        t2.start();

        synchronized (sharedArray) {
            while (!sharedArray.isFull()) {
                sharedArray.wait(); // Wait until both threads finish their tasks
            }
        }

        int[] result = sharedArray.getArray();

        // Printing the result
        System.out.println("Resulting Array:");
        for (int num : result) {
            System.out.print(num + "\n");
        }
    }
}

