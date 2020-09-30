import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int i, j;
        char c = new Scanner(System.in).next().charAt(0);
        
        for (j = 0; j <= (c - 'A'); j++) {
            for (i = 0; i < j; i++)
                System.out.print(" ");
            for (i = j; i <= (c - 'A'); i++)
                System.out.printf("%c",(char) (c - i));
            for (i = 'A'; i < c - j; i++)
                System.out.printf("%c",(char) i);
            System.out.print("\n");
        }
    }
}
