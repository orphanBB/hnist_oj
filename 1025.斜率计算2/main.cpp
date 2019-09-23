#include <iostream>
#include "cmath"

using namespace std;

int max_com(int a,int b);

int main()
{
    int x1,y1,x2,y2;
    int m,n;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
        cout<<"-1"<<endl;
    else
    {
        m=x2-x1;
        n=y2-y1;
        if((m/n)<0)
            cout<< "-";
        cout<< abs(m)/max_com(m,n) << "/" << abs(n)/max_com(m,n)<<endl;
    }
    return 0;
}

int max_com(int a,int b)
{
    int tmp,i,result=0;
    if(a>b)
        tmp=a;
    else
        tmp=b;
    for(i=0;i<=tmp;i++)
    {
        if(a%i==0&&b%i==0&&i>result)
            result=i;
    }
    return result;
}
