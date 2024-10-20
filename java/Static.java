class obcount{
    int a;
    static int NoOfObjects = 0;

    public void printInfo(){
        System.out.println(a);
    }

     obcount()
    {
        NoOfObjects++;
    }

     obcount(int a){
        NoOfObjects++;
        this.a = a;
    }

    public static int getObjectCount() {
        return NoOfObjects;
    }
}
public class Static
{

    public static void main(String[] args) {
        obcount obj1 = new obcount();
        obj1.a = 12;
        obcount obj2 = new obcount();
        obj2.a = 14;
        obcount obj3 = new obcount(121);
        
        obj1.printInfo();
        obj2.printInfo();
        obj3.printInfo();


        System.out.println("Number of objects created: " + obcount.getObjectCount());
    }
    
}
