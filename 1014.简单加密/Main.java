package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        for (int i = 0; i < 3; i++)
        {
            System.out.printf("%c",str.charAt(i)+2);//charAt() returns the character at the specified index
        }
    }
}

