class Shape {                               //Base Class
    public void area() {
        System.out.println("Displaying area");
    }
}

class Rectangle extends Shape {           //Derived class from Shape

    public void area(int l, int h) {
        System.out.println(l * h);           
    }
}

class Circle extends Shape{               //Another derived class from Shape
    public void area(int r){
        System.out.println(3.14*r*r);     //Hierarchical Inheritance
    }
}

public class inheritance2 {
    public static void main(String[] args) {

    }
}
