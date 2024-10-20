class test{
    public String toString(){
        return "String Demo";  //toString(): returns the value of a String object
    }
}

public class StringTest1 {
    public static void main(String[] args) {
        test t =new test();

        String s = "Demo " + t;
        System.out.println(s);
        System.out.println(t);
    }
}
