import java.util.Scanner;

interface Employee{
    double earnings(double basic);
    double deduction(double basic);
    double bonus(double basic);
}

class Manager implements Employee{
    public double earnings(double basic){
        return basic + 0.8*basic + 0.15*basic;
    }

    public double deduction(double basic){
        return 0.12*basic;
    }

    public double bonus(double basic){
        return 0;
    }
}

class Sub_staff extends Manager{

    public double bonus(double basic){
        return 0.50*basic;
    }
}

public class Abstract3 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter basic salary in Rs.: ");
        double basic = s.nextDouble();

        Sub_staff s1 = new Sub_staff();

        double earnings = s1.earnings(basic);
        double deduction = s1.deduction(basic);
        double bonus = s1.bonus(basic);

        System.out.println("Earnings: Rs." + earnings);
        System.out.println("Deduction: Rs." + deduction);
        System.out.println("Bonus: Rs." + bonus);
    }
}
