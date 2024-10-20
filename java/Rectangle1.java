import java.util.Scanner;

class area_perimeter{
    double l,b;
    public void printarea(){
        System.out.println("Area: " + this.l*this.b);

    }
    public void printperimeter(){
        System.out.println("Perimeter: " + 2*(this.l+this.b));

    }
}

 public class Rectangle1 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        area_perimeter a1 = new area_perimeter();
        System.out.println("Enter Length: ");
        a1.l = s.nextDouble();

        System.out.println("Enter Breadth: ");
        a1.b = s.nextDouble();

        s.close();

        a1.printarea();
        a1.printperimeter();

    }

}