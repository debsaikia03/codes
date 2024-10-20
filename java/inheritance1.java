class Shape {                     //Base class
    public void area() {
        System.out.println("Displaying area");  
    }
}

class Rectangle extends Shape {              //Derived class from Shape
    int l, h;

    public void area(int l, int h) {
        System.out.println(l * h);           //Single-level Inheritance
    }
}

public class inheritance1 {
    public static void main(String[] args) {

    }
}
