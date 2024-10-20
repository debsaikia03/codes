import java.util.Scanner;

class StringTest13{
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String s1 = s.next();
        String rev="";
        for(int i=s1.length()-1;i>=0;i--){
            rev=rev+s1.charAt(i);
        }
        if(s1.equals(rev)){
            System.out.println("It is a palindrome.");
        }
        else{
            System.out.println("It is not a palindrome.");
        }
    }
}
