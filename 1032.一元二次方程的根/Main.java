import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt(), b = scanner.nextInt(), c = scanner.nextInt();

        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            // No Result
            System.out.println("error");
        } else if (delta == 0) {
            // One Result
            double result = (-b) * 1.0 / (2 * a);
            System.out.println((int)result);
        } else if (delta > 0) {
            // Two Result
            double result1 = ((-b) * 1.0 + Math.sqrt(delta)) / (2 * a);
            double result2 = ((-b) * 1.0 - Math.sqrt(delta)) / (2 * a);
            System.out.print((int)(Math.min(result1, result2)));
            System.out.print(" ");
            System.out.print((int)(Math.max(result1, result2)));
        }
    }
}
