public class StringTest8 {
    public static void main(String[] args) {

        String s1= "Apple";
        String s2 = "Watermelon";

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
}
