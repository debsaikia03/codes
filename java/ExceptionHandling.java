public class ExceptionHandling {
    public static void main(String[] args) {
        int d = args.length;

        int a = 2;
        try{
        int c = a/d;
        System.out.println(c);
       }
       catch(ArithmeticException e){
        System.out.println(e);Th
       }
}
}