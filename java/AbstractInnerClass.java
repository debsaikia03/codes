interface Acc{
     void eat();
}

class AbstractInnerClass {
    public static void main(String[] args) {
        Acc a1 = new Acc(){
           public void eat(){
                System.out.println("You're eating");
            }
        };

        a1.eat();
    }
}
