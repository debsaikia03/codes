import java.util.Scanner;

class Box1{
    double l,b,h;

    public void printVol(){
        System.out.println("Volume: " + this.l*this.b*this.h);
    }
}

public class Demo1 {
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        Box1 b1 = new Box1();
        
        System.out.print("Enter length: ");
        b1.l = s.nextDouble();

        System.out.print("Enter breadth: ");
        b1.b = s.nextDouble();

        System.out.print("Enter height: ");
        b1.h = s.nextDouble();

        s.close();

        b1.printVol();
    }
}

