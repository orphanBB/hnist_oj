package com.company;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        double sum = sc.nextInt();
        double result = 0;
        if(sum > 20)
        {
            result += (sum - 20) * 10;
            sum = 20;
        }
        if(sum > 10)
        {
            result += (sum - 10) * 7;
            sum = 10;
        }
        result += sum * 6;
        System.out.printf("%d",(int)result);
    }
}

