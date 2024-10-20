class pen{
    String color;
    String type;

    public void write(){
        System.out.println("Write!");
    }

    public void printColor(){
        System.out.println(this.color);
    }

    public void printType(){
        System.out.println(this.type);
    }
}



public class penname {
    public static void main(String[] args) {
        pen p1 = new pen();
        p1.color = "blue";
        p1.type = "ballpoint";

        p1.write();
        p1.printColor();
        p1.printType();

        pen p2 = new pen();
        p2.color = "red";
        p2.type = "gel";

        p2.write();
        p2.printColor();
        p2.printType();
    }
}

