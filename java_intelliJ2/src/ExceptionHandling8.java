class CheckArgumentException extends Exception {
    public CheckArgumentException(String message) {
        super(message);
    }
}
public class ExceptionHandling8 {
    public static void main(String[] args) {

        try {
            if (args.length < 4) {
                throw new CheckArgumentException("Insufficient number of arguments passed");
            }
            else {
                int sumOfSquares = 0;
                for (String arg : args) {
                    int num = Integer.parseInt(arg);
                    sumOfSquares += num * num;
                }
                System.out.println("Sum of squares of all the four elements: " + sumOfSquares);
            }
        }
        catch (CheckArgumentException e) {
            System.out.println("Exception occurred: " + e.getMessage());
        }
        catch (NumberFormatException e) {
            System.out.println("Exception occurred: Invalid argument passed");
        }
    }
}