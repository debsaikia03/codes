public class StringTest12 {
    public static void main(String[] args) {
        String s = "That is a boy! He is handsome.";
        String r ="";

                int a = s.indexOf("is");
                int b = s.lastIndexOf("is");
                System.out.println(a);
                System.out.println(b);
                r = s.substring(0, a);
                r = r + "was";
                r = r + s.substring(a+2, s.length());

                System.out.println(r);

    }
}
