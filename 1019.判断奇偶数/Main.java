package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        String [] str = {"EVEN","ODD"};
        int k = sc.nextInt();
        System.out.print(str[k%2]);
    }
}

