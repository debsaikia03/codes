class StringTest15{
    public static void main(String[] args) {
        //valueof
        int a=40;
        String s=String.valueOf(a);
        System.out.println(s);

        //charAt()
        char ch="kiit".charAt(3);
        System.out.println(ch);

        //getchar()
        String b="helloworld";
        char v[]=new char[10];
        b.getChars(3,7,v,0);
        System.out.println(v);

        //equals
        String S1="hello";
        String S2="HELLO";
        S1.equalsIgnoreCase(S2);//true
        S1.equals(S2);//false

        //endswith&startswith
        "Football".endsWith("ball");
        "Football".startsWith("foot");

        //equals and ==
        String S3="Hello";
        String S4=new String("Hello");
        S3.equals(S4);//true
        if(S1==S4){
            System.out.println();
        }//false

        //CompareTo()
        S3.compareTo(S1);//0 as both is same

        //indexof()
        String S5="this is kiit";
        int i=S5.indexOf('t');//index of the first appearance
        int j=S5.lastIndexOf('t');//index of the last appearance
        int k=S5.lastIndexOf("this");
        int l=S5.lastIndexOf("this");
        int m=S5.indexOf('t',10);//from index 10 to last
        int n=S5.lastIndexOf('t',60);//from 60 to 0

        //substring()
        String S6=S1.substring(2);
        String S7=S1.substring(1,3);

        //concat()
        String S8="Hare";
        String S9=S8.concat("Ram");

        //replace()
        String S10="Hello".replace('l','m');

        //trim()
        String S11=" Hello World ";
        String S12=S11.trim();
        System.out.println(S12);

        //Uppercase&Lowercase
        String S13=S1.toUpperCase();
        String S14=S1.toLowerCase();

        //join
        String S15=String.join("abc","def","ghi");

        //stringbuffer
        StringBuffer S17=new StringBuffer("def");
        StringBuffer S16=new StringBuffer("Hello");
        System.out.println(S16);
        System.out.println(S16.length());//5+16=21
        System.out.println(S16.capacity());//21

        //insert()
        String s18="I Java";
        StringBuffer s19 = new StringBuffer(s18);
        s19.insert(2,"like");

        //reverse()
        String s20="Engineering";
        StringBuffer s21=new StringBuffer(s20);
        s21.reverse();
    }
}
