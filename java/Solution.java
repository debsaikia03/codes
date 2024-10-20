class Sol {
    String word;
    char ch;

    Sol(String word, char ch){
        this.word = word;
        this.ch = ch;
    }
    
    public void reversePrefix(String word, char ch) {
        for(int i=0;i<word.length();i++){
            if(ch == word.charAt(i)){
                String s1 = word.substring(0,i+1);
                StringBuffer s2 = new StringBuffer(s1);
                s2.reverse();
                s2.append(word.substring(i+1,word.length()));
                System.out.println(s2);
                break;
            }
        }
          
    }
}

public class Solution{
    public static void main(String[] args) {
        Sol r = new Sol("abcde", 'c');
        

        r.reversePrefix(r.word,r.ch);

    }
}