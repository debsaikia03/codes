public class ExceptionHandling7 {
    public static void main(String[] args) {
        int a = 10, b = 0, c;

        try {
            c = a / b;

            System.out.println(c);
        }

        catch (ArithmeticException e) {
            System.out.println("Can't divide with zero");
        }

        finally {
            System.out.println("ArithmeticException caught by try-catch-finally block");
        }
    }

}
