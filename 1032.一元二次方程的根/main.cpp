#include <iostream>
#include "cmath"
#include "stdio.h"

using namespace std;

int main()
{
    double a,b,c,temp;
    double x1,x2;
    cin>>a>>b>>c;
    if(a!=0&&a>=-1000&&a<=1000&&b>=-1000&&b<=1000&&c>=-1000&&c<=1000)
    {
        temp=pow(b,2)-4*a*c;
        if(temp<0)
            cout<< "error" <<endl;
        else if(temp==0)
            printf(".lf",-b/(2*a));
        else
        {
            x1=(-b+sqrt(temp))/(2*a);
            x2=(-b-sqrt(temp))/(2*a);
            if(x1<x2)
                printf("%.lf %.lf",x1,x2);
            else
                printf("%.lf %.lf",x2,x1);
        }
    }
    return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double a,b,c,s,d,e;
//	cin>>a>>b>>c;
//	s=b*b-4*a*c;
//	if(s<0) cout<<"error";
//	else if(s==0)
//	{
//		d=(-b)/a/2;
//		printf("%.lf",d);
//	}
//	else
//	{
//		d=((-b)+sqrt(s))/(a*2);
//		e=((-b)-sqrt(s))/(a*2);
//		if(d<e) printf("%.lf %.lf",d,e);
//		else printf("%.lf %.lf",e,d);
//	}
//    return 0;
//}
