// Write a program which will overload the area () method and display the area of a circle, triangle and square as per user choice and user entered dimensions. 
import java.util.Scanner;
class are
{
    public void area(double r)
    {
        float pi=22.7f;
        double res=(pi*r*r);
        System.out.println("The area of circle is:"+res);
    }
    public void area(float s)
    {
        double res=(s*s);
        System.out.println("The area of square is:"+res);
    }
    public void area(double l,double b)
    {
        double res=(0.5*l*b);
        System.out.println("The area of traingle is:"+res);
    }
}
public class OverloadArea
{
  public static void main(String[] args) 
  {
    Scanner sc=new Scanner (System.in);
    are a=new are();
    System.out.println("Enter the radius:");
    double r=sc.nextDouble();
    System.out.println("Enter the height:");
    double h=sc.nextDouble();
    System.out.println("Enter the base:");
    double b=sc.nextDouble();
    System.out.println("Enter the side:");
    float s=sc.nextFloat();
    a.area(r);
    a.area(s);
    a.area(h, b);
    sc.close();
  }
  
}