package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            System.out.print(str.charAt(i)+" ");//charAt() returns the character at the specified index
            sum += str.charAt(i);
        }
        System.out.printf("\n%d",sum - 3*'0');
    }
}

