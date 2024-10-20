import java.util.Scanner;

class UnderflowException extends Exception{
    @Override
    public String toString(){
        return "Stack Empty!!!";
    }
}

class OverflowException extends Exception{
    public String toString(){
        return "Stack Full!";
    }
}
public class ExceptionHandling5 {
    public static void push(int arr[], int top) throws OverflowException{
        if(top==10){
            throw new OverflowException();
        }

        Scanner s = new Scanner(System.in);

        System.out.println("Enter new data: ");
        int n = s.nextInt();

        top = top+1;
        arr[top]= n;
    }
    public static void pop(int arr[],int top) throws UnderflowException{
        if(top==-1){
            throw new UnderflowException();
        }

        arr[top]=-1;
        top=top-1;
    }

    public static void main(String[] args) {

        int top=-1;
        int [] arr = new int[10];

        try{
            push(arr,top);
            pop(arr,top);
        }

        catch(UnderflowException e){
            System.out.println("Underflow Exception!!!");
            System.out.println(e);
        }

        catch(OverflowException f){
            System.out.println("Overflow Exception!!!");
            System.out.println(f);
        }
    }
}

