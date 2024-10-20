import java.util.Scanner;

class plate{
    double l;
    double w;

    plate(){

    }

    plate(double l1, double w1){
        this.l=l1;
        this.w=w1;
    }

    public void printDimensions(){
        System.out.printf("Length: %.2f\n",this.l);
        System.out.printf("Width: %.2f\n",this.w);
    }
}

class box extends plate{
    double h;

    box(){

    }
    
    box(double h1){
        this.h=h1;
    }

    public void printDimensions(){
        System.out.printf("Height: %.2f\n",this.h);
    }
}

class woodbox extends box{
    double t;

    woodbox(){

    }
    
    woodbox(double t1){
        this.t=t1;
    }

    public void printDimensions(){
        System.out.printf("Thickness: %.2f\n",this.t);
    }

}
public class Plate1 {
    public static void main(String[] args) {
         
        Scanner s = new Scanner(System.in);

        System.out.println("Enter plate dimensions: ");

        System.out.print("Enter length: ");
        double l = s.nextDouble();

        System.out.print("Enter width: ");
        double w = s.nextDouble();

        System.out.print("For box dimensions, enter height: ");
        double h = s.nextDouble();

        System.out.print("For wooden box dimensions, enter thickness: ");
        double t = s.nextDouble();

        s.close();

        plate p1 = new plate(l,w);
        box b1 = new box(h);
        woodbox w1 = new woodbox(t);

        System.out.println("\nGiven dimensions:");
        p1.printDimensions();
        b1.printDimensions();
        w1.printDimensions();

    }
}
