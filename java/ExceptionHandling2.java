import java.util.Scanner;

class HrException extends Exception{
    public String toString(){
        return "Hours should be between 0 and 23";
    }
}

class MinException extends Exception{
    public String toString(){
        return "Minutes should be between 0 and 59";
    }
}

class SecException extends Exception{
    public String toString(){
        return "Seconds should be between 0 and 59";
    }
}

class Time{
    int h;
    int m;
    int s;

    public void setTime() throws HrException, MinException, SecException{
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter hours: ");
        h = scan.nextInt();

        if(h < 0 || h > 59){
            throw new HrException();
        }

        System.out.println("Enter minutes: ");
        m = scan.nextInt();

        if(m < 0 || m > 59){
            throw new MinException();
        }

        System.out.println("Enter seconds: ");
        s = scan.nextInt();

        if(s < 0 || s > 59){
            throw new SecException();
        }
        
    }

    public void display(){
        System.out.println("Time:" + h + ":" + m + ":" + s);
    }
}

public class ExceptionHandling2{
    public static void main(String[] args) {
        Time t = new Time();
         
        try{
            t.setTime();
        }
        catch(HrException h){
            System.out.println(h);
        }
        catch(MinException m){
            System.out.println(m);
        }
        catch(SecException s){
            System.out.println(s);
        }

        t.display();

    }
}