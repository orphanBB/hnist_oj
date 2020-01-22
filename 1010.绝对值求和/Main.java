package com.company;

import java.util.Scanner;

import static java.lang.Math.abs;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double A = sc.nextDouble();
        double B = sc.nextDouble();
        System.out.printf("%.1f",abs(A)+abs(B));//abs() returns the absolute value of the parameter
    }
}

