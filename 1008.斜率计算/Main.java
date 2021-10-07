package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double Xa = sc.nextDouble();
        double Ya = sc.nextDouble();
        double Xb = sc.nextDouble();
        double Yb = sc.nextDouble();
        System.out.printf("%.2f",(Yb-Ya)/(Xb-Xa));//Xb-Xa!=0
    }
}

