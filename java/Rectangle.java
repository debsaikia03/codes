import java.util.Scanner;

class AreaPeri{
    double l, b;

    public void printArea(){
        System.out.println("Area: " + this.l*this.b);
    }

    public void printPeri(){
        System.out.println("Perimeter: " + 2*(this.l)+2*(this.b));
    }
}

public class Rectangle {
     public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        AreaPeri b1 = new AreaPeri();
        
        System.out.print("Enter length: ");
        b1.l = s.nextDouble();

        System.out.print("Enter breadth: ");
        b1.b = s.nextDouble();

        s.close();

        b1.printArea();
        b1.printPeri();
    }
}



