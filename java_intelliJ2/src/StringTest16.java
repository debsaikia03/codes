public class StringTest16 {
    public static void main(String[] args) {
        String s1 = "I Java";

        StringBuffer s2 = new StringBuffer(s1);

        s2.insert(2, "love ");

        System.out.println(s2);

        String s3 = String.join("abc","def","ghi");
        System.out.println(s3);
    }
}
