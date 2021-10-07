package com.company;


import java.util.Scanner;

import static java.lang.Math.sqrt;
import static java.util.Arrays.sort;

public class Main {

    public static void main(String[] args) {
        //若题目有要求输出三角形种类那些中文则不用管，由于51cpcoj的问题没法编译中文（害，我因此获得了不晓得多少的Compile Error ）
        // write your code here
        Scanner sc = new Scanner(System.in);
        int [] Triangle = new int[3];
        Triangle[0] = sc.nextInt();
        Triangle[1] = sc.nextInt();
        Triangle[2] = sc.nextInt();
        if(Triangle[0] + Triangle[1] <= Triangle[2] || Triangle[1] + Triangle[2] <= Triangle[0] || Triangle[0] + Triangle[2] <= Triangle[1])
        {
            System.out.print("ERROR");
        }
        else
        {
            sort(Triangle);
            int c = Triangle[2];
            int a = Triangle[0];
            int b = Triangle[1];
            double s = sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) * 0.25;
            System.out.printf("%.2f",s);
        }
    }
}

