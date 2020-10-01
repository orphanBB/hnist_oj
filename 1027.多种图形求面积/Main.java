package com.company;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int type = sc.nextInt();
        double PI = 3.141592,result = 0;
        double a = 0,b = 0;
        switch (type)
        {
            case 1:
                a = sc.nextDouble();
                b = sc.nextDouble();
                result = a * b;
                break;
            case 2:
                a = sc.nextDouble();
                b = sc.nextDouble();
                result = a * b * 0.5;
                break;
            case 3:
                a = sc.nextDouble();
                result = PI * a * a;
                break;
        }
        System.out.printf("%d",(int)result);
    }
}

