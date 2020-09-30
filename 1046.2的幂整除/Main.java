import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int num = new Scanner(System.in).nextInt(), i = 0;
        while (num > 1 && num % 2 == 0) {
            num >>= 1;
            i += 1;
        }
        System.out.println(i);
    }
}
