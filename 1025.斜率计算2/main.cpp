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
    {
        cout<<"-1"<<endl;
    }
    else if(y1==y2)
    {
        cout<<"0"<<endl;
    }
    else
    {
        m=x2-x1;
        n=y2-y1;
        if((n/m)<0)
        {
            cout<< "-";
        }
        m=abs(m);
        n=abs(n);
        if(m/n==1)
            cout<<m/n<<endl;
        else if(m/max_com(m,n)==1)
            cout<<n/max_com(m,n)<<endl;
        else
        {
            cout<< (n/max_com(m,n)) << "/" << (m/max_com(m,n))<<endl;
        }
    }
    return 0;
}


int max_com(int a,int b)
{
    int temp=a;
    int i,result;
    if(a>b)
    {
        temp=b;
    }
    for(i=temp;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            result=i;
            break;
        }
    }
    return result;
}
