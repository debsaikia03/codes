import java.util.Scanner;

public class WeekDay {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter a date from 1-31 of January 2024: ");
        int date = s.nextInt();

        s.close();

        if (date < 1 || date > 31) {
            System.out.println("Invalid date!");
        }

        else {
            // Calculating Zeller's Congruence
            int month = 1;
            int year = 2024;

            int h = date + 13 * (month + 1) / 5 + (year % 100) + (year / 100) / 4 + 5 * (year / 100);
            h = h % 7;

            switch (h) {
                case 0:
                    System.out.println("The weekday is Saturday.\n");
                    break;
                case 1:
                    System.out.println("The weekday is Sunday.\n");
                    break;
                case 2:
                    System.out.println("The weekday is Monday.\n");
                    break;
                case 3:
                    System.out.println("The weekday is Tuesday.\n");
                    break;
                case 4:
                    System.out.println("The weekday is Wednesday.\n");
                    break;
                case 5:
                    System.out.println("The weekday is Thursday.\n");
                    break;
                case 6:
                    System.out.println("The weekday is Friday.\n");
                    break;
                default:
                    System.out.println("Error in calculating the weekday.\n");
            }

        }
    }
}
