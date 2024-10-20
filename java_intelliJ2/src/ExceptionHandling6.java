import java.util.Scanner;
class NegativeInput extends Exception{
    @Override
    public String toString(){
        return "Exception caught!";
    }
}

public class ExceptionHandling6 {
    public static int ProcessInput(int n) throws NegativeInput{
        if(n<0){
            throw new NegativeInput();
        }
        else
            return 2*n;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter a number: ");

        try{
            int n = s.nextInt();
            System.out.println(ProcessInput(n));
        }
        catch(Exception e){
            System.out.println(e);
            System.out.println("NegativeNumberException: number should be positive");
        }
    }

}
