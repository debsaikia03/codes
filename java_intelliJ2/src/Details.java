import java.util.Scanner;

class Account
{
    int acc_no;
    float balance;
    Account(int a,float b)
    {
        this.acc_no=a;
        this.balance=b;
    }
    public void disp()
    {
        System.out.println("Account no and balance is:"+acc_no+" "+balance);
    }
}
class people extends Account
{
    int aadhar_no;

    people(int a, float b,int c)
    {
        super(a, b);
        aadhar_no=c;
    }
    public void disp()
    {
        System.out.println("Account no and balance and Aadhar no. is:"+acc_no+" ,"+balance+", "+aadhar_no);
    }

}
public class Details
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<3;i++)
        {
            System.out.println("Enter the info of "+(i+1)+"people:");
            System.out.println("Enter the Account no:");
            int a=sc.nextInt();
            System.out.println("Enter the Balance:");
            float b=sc.nextFloat();
            System.out.println("Enter the Aadhar no:");
            int c=sc.nextInt();
            people p=new people(a,b,c);
            p.disp();

        }
        sc.close();
    }
}
