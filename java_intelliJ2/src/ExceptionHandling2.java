public class ExceptionHandling2 {
    public static void main(String[] args) {

        int a=10, b=0, c;

        try{
            c = a/b;

            System.out.println(c);

            int x[] = {1,2,3,4};
            x[10] = 2;
        }

        catch(ArrayIndexOutOfBoundsException f){
            System.out.println("Array index out of bounds");
        }

        catch(ArithmeticException e){
            System.out.println("Can't divide with zero");
        }
    }
}
