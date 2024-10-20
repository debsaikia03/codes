class NegativerRadiusException extends Exception{
    @Override
    public String toString(){
        return "Radius can't be negative";
    }
}

public class ExceptionHandling4{
    public static double area(int r) throws NegativerRadiusException{
        if(r<0){
            throw new NegativerRadiusException();
        }
        double result = Math.PI * r * r;
        return result;
    }
    public static int divide(int a, int b) throws ArithmeticException{

        int result =a/b;
        return result;
    }
    public static void main(String[] args) {
        try{
            int c = divide(7,0);
            System.out.println(c);
            double ar = area(6);
            System.out.println(ar);
        }
        catch(Exception e){
            System.out.println(e);
            System.out.println("Exception!");
        }
    }

}

