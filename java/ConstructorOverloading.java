import java.util.Scanner;
class re
{
    double l;
    double b;
    re()
    {
         l=4;
         b=5;
    }
    re(double l2,double b2)
    {
        this.l=l2;
        this.b=b2;
    }
    public void compute()
    {
        System.out.println("The area of the rectangle is:"+(l*b));
    }
}
public class ConstructorOverloading
{
    public static void main(String[] args) 
    {
        re r=new re();
        r.compute();

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the length:");
        double l=sc.nextDouble();

        System.out.println("Enter the breadth:");
        double b=sc.nextDouble();
        
        re s=new re(l, b);
        s.compute();
        sc.close();

    }
}