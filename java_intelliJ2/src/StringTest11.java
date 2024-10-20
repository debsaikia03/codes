public class StringTest11 {
    public static void main(String[] args) {

        String s[]= {"Apple", "Watermelon", "Banana", "Orange", "KIIT", "abc"};

        String temp;

        for(int i = 0; i<s.length; i++){
            for(int j = i+1; j<s.length; j++){
                if(s[j].compareTo(s[i]) < 0){
                    temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                }
            }
            System.out.print(s[i] + " ");
        }
    }
}
