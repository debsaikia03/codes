public class StringTest5 {
    public static void main(String[] args) {

        String s1 = "hello";
        String s2 = "HELLO";
        String s3 = "hello";

        boolean f= s1.equals(s2); //equals(): compares if two strings are equal(also checks upper & lower cases too)
        boolean g= s1.equals(s3);
        boolean h= s1.equalsIgnoreCase(s2); //equalsIgnoreCase(): compares two strings irrespective of cases

        System.out.println(f);
        System.out.println(g);
        System.out.println(h);
    }
}
