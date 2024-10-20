public class ExceptionHandling1 {
    public static void main(String[] args) {

        int a = 5, b = 0, c;

        try {
            c = a / b;

            System.out.println(c);

        }

        catch (ArithmeticException e) {
            System.out.println(e);
        }

        finally{
            System.out.println("Exception caught by try-catch-finally-block");
        }
    }
}