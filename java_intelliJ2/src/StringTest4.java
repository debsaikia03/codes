public class StringTest4 {
    public static void main(String[] args) {

        String s = "Apple";

        char ch[] = new char[10];

        s.getChars(0,3,ch,0); //getChars(): Copies characters from a string to an array of characters

        System.out.println(ch);
    }
}
