import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int N = new Scanner(System.in).nextInt();
        if (N <= 3) {
            System.out.println(1);
            return;
        }
        for (int i = N - 1; i > 1; i--) {
            if (isPrime(i)) {
                System.out.println(i);
                break;
            }
        }
    }

    public static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i <= ((num + 1) / 2); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
}
