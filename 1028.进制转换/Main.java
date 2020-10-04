package com.company;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int sum = sc.nextInt();
        String str = "";
        while(sum != 0)
        {
            str += sum%2;
            sum /= 2;
        }
        char [] result = str.toCharArray();
        for(int i = result.length-1;i >= 0; i--)
        {
            System.out.print(result[i]);
        }
    }
}

