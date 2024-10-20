import java.util.Scanner;
import java.lang.*;

public class StringManipulation {
    public static void changeCase(String s1){
        StringBuffer conv = new StringBuffer();
        for(int i = 0; i<s1.length(); i++){
            char c = s1.charAt(i);
            if(Character.isUpperCase(c)){
                conv.append(Character.toLowerCase(c));
            }
            else if(Character.isLowerCase(c)){
                conv.append(Character.toUpperCase(c));
            }
            else{
                conv.append(c);
            }
        }
        System.out.println(conv);
    }
    public static void insertString(String s1, String s2){
        StringBuffer s3 = new StringBuffer(s1);

        s3.insert(s1.length()," "+s2);

        System.out.println("\nResultant string:");
        System.out.println(s3);
    }

    public static void reverseString(String s1){
        String rev="";

        for(int i = s1.length()-1; i>=0; i--){
            rev = rev + s1.charAt(i);
        }

        System.out.println("\nReversed string: ");
        System.out.println(rev);
    }

    public static void compareString(String s1, String s2){
           int n = s1.compareTo(s2);

        if(n<0){
            System.out.println(s1 + " < " + s2);
        }
        else if (n>0) {
            System.out.println(s1 + " > " + s2);
        }
        else{
            System.out.println(s1 + " = " + s2);
        }
    }

    public static void stringUpper(String s1){
        String s2 = s1.toUpperCase();

        System.out.println(s2);
    }

    public static void stringLower(String s1){
        String s2 = s1.toLowerCase();

        System.out.println(s2);
    }

    public static void checkChar(String s1, char c){
        int flag =0;
        for(int i =0; i<s1.length(); i++){
            if(c == s1.charAt(i)){
                flag = 1;
                System.out.println("Character found!");
                System.out.println("Character is at position: "+ (i+1));
            }
        }

        if(flag == 0){
            System.out.println("Character not found!");
        }
    }

    public static void stringPalin(String s1){
        StringBuffer s2 = new StringBuffer(s1);

        s2.reverse();

        System.out.println(s1.equals(s2.toString()));

        if(s1.equals(s2.toString())){
            System.out.println("String is a palindrome!");
        }

        else{
            System.out.println(s2);
            System.out.println("String is not a palindrome!");
        }
    }

    public static void countString(String s1){
        int lettersCount=0;
        int vowelsCount =0;
        int consonantCount=0;

        String s2 = s1.toLowerCase();

        for(int i =0; i<s2.length(); i++){
            int n = s2.charAt(i);

            if(n>=97 && n<=122){
                lettersCount++;
            }
        }

        String[] words = s1.split("\\s+");

        int wordsCount = words.length;

        for(int i =0; i<s2.length(); i++){
            int n = s2.charAt(i);

            if(n==97 || n==101 || n==105 || n==111 || n==117 ){
                vowelsCount++;
            }
        }

        for(int i =0; i<s2.length(); i++){
            int n = s2.charAt(i);

            if(n>=97 && n<=122) {
                if (n != 97 && n != 101 && n != 105 && n != 111 && n != 117) {
                    consonantCount++;
                }
            }
        }

        System.out.println("No. of letters: "+ lettersCount);
        System.out.println("No. of words: "+ wordsCount);
        System.out.println("No. of vowels: "+ vowelsCount);
        System.out.println("No. of consonants: "+ consonantCount);
    }

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String s1 = s.nextLine();

        System.out.println("\nMenu-driven program to manipulate string:");
        System.out.println("1. Change the case of string");
        System.out.println("2. Insert another string");
        System.out.println("3. Reverse the string");
        System.out.println("4. Compare two strings");
        System.out.println("5. Convert string into uppercase");
        System.out.println("6. Convert string into lowercase");
        System.out.println("7. Check whether a character is present in the string or not(Also calculates position)");
        System.out.println("8. Check whether a string is palindrome or not");
        System.out.println("9. Check the number of letters, words, vowels, present in the string\n");

        System.out.println("Enter choice: ");
        int n = s.nextInt();

        switch(n) {
            case 1:
                changeCase(s1);
                break;

            case 2:
                System.out.println("\nEnter another string: ");
                String s2 = s.next();
                insertString(s1,s2);
                break;

            case 3:
                reverseString(s1);
                break;

            case 4:
                System.out.println("Enter another string: ");
                String s3= s.next();
                compareString(s1,s3);
                break;

            case 5:
                stringUpper(s1);
                break;

            case 6:
                stringLower(s1);
                break;

            case 7:
                System.out.println("Enter a character: ");
                char c = s.next().charAt(0);
                checkChar(s1,c);
                break;

            case 8:
                stringPalin(s1);
                break;

            case 9:
                countString(s1);
                break;

            default:
                System.out.println("Invalid choice!");
                break;
        }
    }
}
