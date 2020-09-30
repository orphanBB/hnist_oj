import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println(
                isPrime(new Scanner(System.in).nextInt())?
                        "Yes":
                        "No"
        );
    }

    public static boolean isPrime(int num){
        if(num<=1)
            return false;
        for(int i=2;i<=((num+1)/2);i++){
            if(num%i == 0)
                return false;
        }
        return true;
    }
}
