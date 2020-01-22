package com.company;

import java.util.Scanner;

import static java.lang.Math.*;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double alpha = sc.nextDouble();
        double P = 3.141592;
        System.out.printf("%.2f\n%.2f\n",sin(alpha*P/180.0),cos(alpha*P/180.0));//cos(),sin() are cosine and sine respectively
    }
}

