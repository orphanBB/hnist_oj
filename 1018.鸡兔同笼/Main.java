package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int head = sc.nextInt();
        int feet = sc.nextInt();
        System.out.printf("%d %d",(4 * head - feet) / 2,(feet - 2 * head) / 2);//Solving the system of bivariate first order equations
    }
}

