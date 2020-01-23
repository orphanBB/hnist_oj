package com.company;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double sum = sc.nextInt();
        if(sum>=1000)
            sum = sum * 0.5;
        else if(sum >= 500)
            sum = sum * 0.8;
        else if(sum >= 200)
            sum = sum * 0.9;
        System.out.printf("%.2f",sum);
    }
}

