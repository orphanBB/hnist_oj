package com.company;


import java.util.Scanner;

import static java.lang.Math.abs;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        String [] str = {"E","E","E","E","E","E","D","C","B","A","A"};//考虑到100/10=10，所以多加一个A
        double K = sc.nextDouble();
        System.out.print(str[(int)(K/10.0)]);//强制类型转换
    }
}

