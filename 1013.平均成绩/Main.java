package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double one = sc.nextDouble();
        double two = sc.nextDouble();
        double three = sc.nextDouble();
        System.out.printf("%.1f\n",(one+three+two)/3.0);
    }
}

