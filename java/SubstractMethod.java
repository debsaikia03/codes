import java.util.Scanner;
class subtract
{
    int result;
    double a;
    double b;
    Scanner sc=new Scanner(System.in);
    public void sub()
    {
        System.out.println("Enter the value of a and b:");
        this.a=sc.nextDouble();
        this.b=sc.nextDouble();
        System.out.println("Subtract of"+a+"and"+b+"is: "+(a-b));
    }
    public void sub(double a)
    {
        System.out.println("Enter the value of b:");
        b=sc.nextInt();
        System.out.println("Subtract of"+a+"and"+b+"is: "+(a-b));
    }
    public void sub(double a,double b)
    {
        this.a=a;
        this.b=b;
        System.out.println("Subtract of"+a+"and"+b+"is: "+(a-b));
    }
}
public class SubstractMethod
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        subtract sc=new subtract();
        sc.sub();
        System.out.println("Enter the value of a:");
        double a=in.nextInt();
        sc.sub(a);
        System.out.println("Enter the value of a:");
        double c=in.nextInt();
        System.out.println("Enter the value of b:");
        double b=in.nextInt();
        sc.sub(c, b);
        in.close();
    }
}
