public class StringTest10 {
    public static void main(String[] args) {

        String s1 = "Watermelon";

        String s2 = s1.substring(5); //substring(): returns a new string which is the substring of a given string
        String s3 = s1.substring(2,7);

        System.out.println(s2);
        System.out.println(s3);
    }
}
