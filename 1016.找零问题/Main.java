package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int price = sc.nextInt();
        int money = 50 - price;//He has 50 yuan
        System.out.println(money/10);
        System.out.println(money%10);
    }
}

