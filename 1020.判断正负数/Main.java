package com.company;


import java.util.Scanner;

import static java.lang.Math.abs;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        String [] str = {"negative","zero","positive"};
        int K = sc.nextInt();
        System.out.print(str[K==0?1:K/abs(K)+1]);
    }
}

