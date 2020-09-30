import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int length = scanner.nextInt();
        for(int i=0;i<length;i++)
            System.out.print("_");
        scanner.close();
    }
}
