package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double peacetime = sc.nextDouble();
        double experiment = sc.nextDouble();
        double endofterm = sc.nextDouble();
        System.out.printf("%.1f\n",peacetime*0.2+experiment*0.3+endofterm*0.5);
    }
}

