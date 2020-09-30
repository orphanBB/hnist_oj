import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int N = new Scanner(System.in).nextInt(), result = 0;
        for (int i = 1; i <= N; i++) {
            result += getNineNum(i);
        }
        System.out.println(result);
    }

    public static int getNineNum(int num) {
        int result = 0,src = num;
        while (num > 0) {
            if (num % 10 == 9)
                result += 1;
            num /= 10;
        }
        return result;
    }
}
