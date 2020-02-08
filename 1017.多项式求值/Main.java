package com.company;

import java.util.Scanner;

import static java.lang.Math.pow;

public class Main {

    public static void main(String[] args) {
        // write your code here
        //y=a1 * x^3+a2 * x^2+a3 * x+a0
        Scanner sc = new Scanner(System.in);
        double a1 = sc.nextDouble();
        double a2 = sc.nextDouble();
        double a0 = sc.nextDouble();
        double a3 = sc.nextDouble();
        double x = sc.nextDouble();
        System.out.printf("%.2f",a1*pow(x,3)+a2*pow(x,2)+a3*x +a0);//Pow(x,y) returns the Y power of X
    }
}

