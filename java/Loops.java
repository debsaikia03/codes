public class Loops {
    public static void main(String[] args) 
    {
        System.out.println("\nUsing While Loop");
        System.out.println("Printing numbers from 1 to 10:");

        int i=1;

        while(i<=10)
        {
            System.out.format("%d ",i);
            i++;
        }
     
        System.out.println("\n\nUsing For Loop");
        System.out.println("Printing numbers from 10 to 20:");

        for(int j=10; j<=20; j++)
        {
            System.out.format("%d ",j);
        }

        System.out.println("\n\nUsing Do-While Loop");
        System.out.println("Printing numbers from 20 to 30:");

        int k=20;

        do
        {
            System.out.format("%d ",k);
            k++;
        }while(k<=30);


    }
}
