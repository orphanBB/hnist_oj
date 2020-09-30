import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long result = 0;
        for (int i = 0; i < n; i++) {
            result += scanner.nextInt();
        }
        System.out.printf("%.2f",result*1.0/n);
    }
}
