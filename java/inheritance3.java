class Shape {                               //Base Class
    public void area() {
        System.out.println("Displaying area");
    }
}

class Triangle extends Shape {           //Derived class from Shape

    public void area(int l, int h) {
        System.out.println(1/2 * l * h);           
    }
}

class EquilTriangle extends Triangle{               //Derived class from Triangle
    public void area(int l,int h){
        System.out.println(1/2 * l * h);
    }                                               //Multi-level Inheritance
}

public class inheritance3 {
    public static void main(String[] args) {

    }
}


