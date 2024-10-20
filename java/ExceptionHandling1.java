import java.util.Scanner;

class NegativeRadiusException extends Exception{
    public String toString(){
        return "Radius can't be negative";
    }
}



public class ExceptionHandling1 {

    public static double area(int r) throws NegativeRadiusException{
        if(r<0){
            throw new NegativeRadiusException();
        }
    
        return 3.14*r*r;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter radius: ");
        int n = sc.nextInt();

        try{
            double ar = area(n);
            System.out.println(ar2);
        }
        catch(Exception e){
            System.out.println("Exception!");
            System.out.println(e);
            }
    }
}
