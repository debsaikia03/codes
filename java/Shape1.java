import java.util.Scanner;

class Shape2D{
    double l;
    double b;
}

class Shape3D extends Shape2D{
    double h;

    public double Area(double l,double b){
        return this.l*this.b; 
    }

    public double Volume(double l, double b, double h){
        return this.l*this.b*this.h;
    }
}

public class Shape1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        Shape3D b1 = new Shape3D();

        System.out.print("Enter length: ");
        b1.l = s.nextDouble();

        System.out.print("Enter breadth: ");
        b1.b = s.nextDouble();

        System.out.print("Enter height (if 2D sheet enter '0'): ");
        b1.h = s.nextDouble();

        s.close();

        if(b1.h==0){
           double area = b1.Area(b1.l,b1.b);
           System.out.printf("Area: %.3f sq ft.",area);
           System.out.printf("Cost of the 2D sheet(Rs.40/sq ft): Rs. %.2f.",area*40);
        }

        else{
            double vol = b1.Volume(b1.l,b1.b,b1.h);
            System.out.printf("Volume: %.3f cubic ft.",vol);
            System.out.printf("Cost of the 3D box(Rs.60/cubic ft): Rs. %.2f.",vol*60);
        }
    }
}
