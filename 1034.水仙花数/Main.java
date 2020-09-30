import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int result = 0;
        int n = scanner.nextInt();
        if (n <= 0)
            return;
        for (int i = 0; i < n; i++) {
            result += scanner.nextInt();
        }
        System.out.println(result);
    }
}
