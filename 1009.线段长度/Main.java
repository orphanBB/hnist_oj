package com.company;

import java.util.Scanner;

import static java.lang.Math.sqrt;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double Xa = sc.nextDouble();
        double Ya = sc.nextDouble();
        double Xb = sc.nextDouble();
        double Yb = sc.nextDouble();
        System.out.printf("%.2f",sqrt((Xb - Xa)*(Xb - Xa) + (Yb - Ya)*(Yb - Ya)));//sqrt()包含在java.lang.Math中用于返回参数的算术平方根
    }
}

