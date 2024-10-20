public class StringTest7 {
    public static void main(String[] args) {

        String s1 = "hello";
        String s2 = "hello";
        String s3 = "hello";

        boolean f = s1==s3; // "==": also checks for memory location

        System.out.println(f);
    }
}
