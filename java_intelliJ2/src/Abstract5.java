import java.util.Scanner;
interface stack{
    void push(int item);
    void pop();
}

class FixedStack implements stack{
    int top1, size1;
    public void push(int item){

    }

    @Override
    public void pop() {


    }
}


class DynamicStack implements stack{
    int top2, size2;
    @Override
    public void push(int item) {

    }
    @Override
    public void pop() {

    }
}

public class Abstract5{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        FixedStack f1 = new FixedStack();
        DynamicStack d1 = new DynamicStack();

        f1.top1=-1;
        d1.top2=-1;

        System.out.println("Enter size of FixedStack: ");
        f1.size1 = s.nextInt();

        System.out.println("Enter size of DynamicStack: ");
        d1.size2 = s.nextInt();


    }

}

