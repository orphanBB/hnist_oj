import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt(), num = 0;
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
                num += 1;
        }
        System.out.println(num);
    }
}
