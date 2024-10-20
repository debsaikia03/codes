class Animal{
    int legs;

    class Dog{
        public int showlegs(){
              return legs=4;


        }
    }
}



public class NestedClass1 {
    public static void main(String[] args) {
        Animal a1 = new Animal();
        Animal.Dog d1 = a1.new Dog();
        System.out.println(d1.showlegs());
    }
}
