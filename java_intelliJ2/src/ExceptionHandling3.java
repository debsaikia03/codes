public class ExceptionHandling3 {
    public static void main(String[] args) {

        try{

            throw new ArithmeticException("/ by 0");

        }

        catch(ArithmeticException e){
            System.out.println(e);
        }

    }
}


