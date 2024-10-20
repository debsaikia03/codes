import java.util.Scanner;

class HrsException extends Exception {
    public HrsException(String message) {
        super(message);
    }
}

class MinException extends Exception {
    public MinException(String message) {
        super(message);
    }
}

class SecException extends Exception {
    public SecException(String message) {
        super(message);
    }
}

class Time {
    private int hours;
    private int minutes;
    private int seconds;

    public void setTime() throws HrsException, MinException, SecException {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter hours: ");
        hours = scanner.nextInt();
        if (hours < 0 || hours > 24) {
            throw new HrsException("InvalidHourException: Hours should be between 0 and 24");
        }

        System.out.print("Enter minutes: ");
        minutes = scanner.nextInt();
        if (minutes < 0 || minutes > 60) {
            throw new MinException("InvalidMinuteException: Minutes should be between 0 and 60");
        }

        System.out.print("Enter seconds: ");
        seconds = scanner.nextInt();
        if (seconds < 0 || seconds > 60) {
            throw new SecException("InvalidSecondException: Seconds should be between 0 and 60");
        }
    }

    public void displayTime() {
        System.out.println("Time: " + hours + ":" + minutes + ":" + seconds);
    }
}

public class ExceptionHandling9 {
    public static void main(String[] args) {
        Time time = new Time();
        try {
            time.setTime();
            time.displayTime();
        } catch (HrsException e) {
            System.out.println("Exception occurred: " + e.getMessage());
        } catch (MinException e) {
            System.out.println("Exception occurred: " + e.getMessage());
        } catch (SecException e) {
            System.out.println("Exception occurred: " + e.getMessage());
        }
    }
}

