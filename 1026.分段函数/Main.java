package com.company;


import java.util.Scanner;

import static java.lang.Math.pow;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        //y =x^2-1 when x<0
        //y = x^2 when 0<=x<1
        //y = x^2+1 when x>=1
        int sum = sc.nextInt();
        if(sum >= 0)
        {
            if(sum == 0)
                sum = (int)pow(sum , 2);//The return value of the pow () method is double
            else
                sum = (int)pow(sum , 2) + 1;
        }
        else
        {
            sum = (int)pow(sum , 2) - 1;
        }
        System.out.print(sum);
    }
}

