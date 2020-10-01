package com.company;


import java.util.Scanner;

import static java.lang.Math.abs;

public class Main {

    static int Mcx(int a,int b)//The basic algorithm for finding the greatest common factor can be recorded
    {
        int c = 0;
        while(b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        if(x2 - x1 == 0)
        {
            System.out.print(-1);
        }
        else
        {
            if((y2 - y1)%(x2 - x1) == 0)
                System.out.print((y2 - y1)/(x2 - x1));
            else
            {
                int c = Mcx(y2 - y1, x2 - x1);
                int a = (y2 - y1) / c,b = (x2 - x1) / c;
                if(a / b < 0)//Judge whether the positive and negative of molecular denominator are the same
                {
                    a = -1 * abs(a);
                    b = abs(b);
                }
                System.out.print(a + "/" + b);
            }
        }
    }
}

