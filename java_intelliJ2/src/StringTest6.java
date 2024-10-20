public class StringTest6 {
    public static void main(String[] args) {

        boolean f = "Foobar".endsWith("bar");  //endsWith(): checks whether the string ends with the given char or str
        boolean g ="Foobar".startsWith("Foo"); //startsWith(): checks whether the string starts with the given char or str

        System.out.println(f);
        System.out.println(g);
    }
}
