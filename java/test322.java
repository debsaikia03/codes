public class test322 {
    public static void main(String[] args) {
        String s1 = "qwerty";
        
        int l=0;

        for(int i = 0 ; s1.charAt(i) != '\0' ; i++){
            l++;
        }

        System.out.println(l);
    }
}
