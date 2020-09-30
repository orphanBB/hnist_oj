import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int total = scanner.nextInt();
        int result = 0;
        for (int i = 0; i < total; i++) {
            int num = scanner.nextInt();
            if (num < 0)
                break;
            result += num;
        }
        System.out.println(result);
    }
}
