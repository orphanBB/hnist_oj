package com.company;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int [] num = {0,0};
        char ch = 0;
        int k = 0;
        String str = sc.nextLine();
        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i)<='9'&&str.charAt(i)>='0')
            {
                num[k] = num[k] * 10 + str.charAt(i) - '0';
            }
            else
            {
                ch = str.charAt(i);
                k++;
            }
        }
        switch (ch)
        {
            case '+':
                k = num[0] + num[1];
                break;
            case '-':
                k = num[0] - num[1];
                break;
            case '*':
                k = num[0] * num[1];
                break;
            case '/':
                if(num[1]==0)
                    k = -1;
                else
                    k = num[0] / num[1];
                break;
            default:k = -1;break;
        }
        System.out.print(k);
    }
}

