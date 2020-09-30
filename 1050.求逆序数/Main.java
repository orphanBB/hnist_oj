import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(), num = 0;
        LinkedList<Integer> integers = new LinkedList<>();
        //put in data
        for(int i=0;i<n;i++)
            integers.offer(scanner.nextInt());
        for(int i=0;i<integers.size();i++){
            for(int j=0;j<i;j++){
                 if(integers.get(j)>integers.get(i))
                     num += 1;
            }
        }
        System.out.println(num);
    }
}
