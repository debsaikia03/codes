package PackGen;

public class Employee{
      protected int emp_id;
      private String name;
      protected double basic;

      protected Employee(int id, String n, double b){
            this.emp_id=id;
            this.name=n;
            this.basic=b;
      }

      public double earnings(){
            double hra=0.8 * basic;
            double da=0.15 * basic;
            return basic + hra + da;
      }
}