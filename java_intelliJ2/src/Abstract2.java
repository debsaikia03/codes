import java.util.Scanner;
interface Motor{
    double capacity=250.0;
    void run();
    void consume();
}

class WashingMachine implements Motor {
    public void run() {
        System.out.println("Washing Machine is running!");
    }
    public void consume() {
        System.out.println("Washing Machine is consuming energy!");
    }
}


public class Abstract2{
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        WashingMachine w1 = new WashingMachine();

        System.out.println("\nCapacity of the motor: "+ w1.capacity);

        w1.run();
        w1.consume();
    }
}