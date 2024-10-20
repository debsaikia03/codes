class Thread1 extends Thread {
    int[] arr1;

    Thread1(int arr[]) {
        this.arr1 = arr;
    }

    public void run() {
        try {
            for (int i = 0; i < 50; i++) {
                int num = (i + 1) * 2; // Calculate even number
                System.out.println(num);
                arr1[i] = num;
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread2 extends Thread {
    int[] arr2;

    Thread2(int arr[]) {
        this.arr2 = arr;
    }

    public void run() {
        try {
            for (int i = 0; i < 50; i++) {
                int num = (i * 2) + 1; // Calculate odd number
                System.out.println(num);
                arr2[i] = num;
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread3 extends Thread {
    int[] arr;
    int[] arr2;

    Thread3(int arr[], int arr2[]) {
        this.arr2 = arr2;
        this.arr = arr;
    }

    public void run() {
        try {
            for (int i = 0; i < 50; i++) {
                arr[i] = arr2[i]; // Copy odd numbers
                System.out.println(arr[i]);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread4 extends Thread {
    int[] arr;
    int[] arr1;

    Thread4(int arr[], int arr1[]) {
        this.arr1 = arr1;
        this.arr = arr;
    }

    public void run() {
        try {
            for (int i = 0; i < 50; i++) {
                arr[i + 50] = arr1[i]; // Copy even numbers
                System.out.println(arr[i + 50]);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class ThreadTest {

    public static void main(String[] args) throws InterruptedException {
        int[] arr1 = new int[50];
        int[] arr2 = new int[50];

        Thread1 t1 = new Thread1(arr1);
        Thread2 t2 = new Thread2(arr2);

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        int[] arr = new int[100];

        Thread3 t3 = new Thread3(arr, arr2);
        Thread4 t4 = new Thread4(arr, arr1);

        t3.start();
        t4.start();

        t3.join();
        t4.join();

        // Printing the combined array
        System.out.println("Combined Array:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
