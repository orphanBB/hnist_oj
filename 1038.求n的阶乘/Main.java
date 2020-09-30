import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int result = 1, n = scanner.nextInt();
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        System.out.println(result);
        scanner.close();
    }
}
