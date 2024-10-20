public class StringTest9 {
    public static void main(String[] args) {

        String s = "This is This KIIT";

        int a = s.indexOf("i");  //indexOf(): returns the position of the first found occurrence of specified characters in a string.
        int b = s.lastIndexOf("i"); //lastIndexOf(): returns the position of the last found occurrence of specified characters in a string.
        int c = s.indexOf("This");
        int d = s.lastIndexOf("This");
        int e = s.indexOf("T",9);
        int f = s.lastIndexOf("T",7);


        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
    }
}
