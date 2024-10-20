class CheckArgumentException1 extends Exception {
    public CheckArgumentException1(String message) {
        super(message);
    }
}

public class ExceptionHandling10{
    public static void main(String[] args) {
        try {
            if (args.length < 4) {
                throw new CheckArgumentException1("Insufficient number of arguments. Please provide four arguments.");
            } else {
                int arg1 = Integer.parseInt(args[0]);
                int arg2 = Integer.parseInt(args[1]);
                int arg3 = Integer.parseInt(args[2]);
                int arg4 = Integer.parseInt(args[3]);

                int result = arg1 * arg1 + arg2 * arg2 + arg3 * arg3 + arg4 * arg4;

                System.out.println("Addition of squares of all four elements: " + result);
            }
        } catch (NumberFormatException e) {
            System.err.println("Error: Arguments should be integers.");
        } catch (CheckArgumentException1 e) {
            System.err.println(e.getMessage());
        }
    }
}

