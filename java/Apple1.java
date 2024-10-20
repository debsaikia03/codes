class Apple {
    void show() {
        System.out.println("This is the show() method of Apple class.");
    }
}

class Banana extends Apple {
    void show() {
        System.out.println("This is the show() method of Banana class.");
    }
}

class Cherry extends Apple {
    void show() {
        System.out.println("This is the show() method of Cherry class.");
    }
}

public class Apple1 {
    public static void main(String[] args) {

        Apple a1 = new Apple();
        Banana b1 = new Banana();
        Cherry c1 = new Cherry();

        Apple r;
        r =a1;
        r.show();
        r=b1;
        r.show();
        r=c1;
        r.show();
    }
}

