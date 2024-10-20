package PackMarket;
import PackGen.Employee;

import java.util.Scanner;

public class Sales extends Employee{
    public Sales(int empid, String ename, double basic) {
        super(empid, ename, basic);
    }

    public double travel_allowance() {
        return 0.05 * earnings();
    }

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter Employee ID: ");
        int emp_id = s.nextInt();

        System.out.println("Enter Employee name: ");
        String emp_name = s.next();

        System.out.println("Enter basic salary: ");
        double basic = s.nextDouble();

        Sales s1 = new Sales(emp_id,emp_name,basic);

        double total_earnings = s1.earnings() + s1.travel_allowance();

        System.out.println("\nEmployee ID: " + s1.emp_id);
        System.out.println("Total earnings: " + total_earnings);
    }
}


