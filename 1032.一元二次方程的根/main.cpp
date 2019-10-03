#include <iostream>
#include "cmath"

using namespace std;

int main()
{
    int a,b,c,temp;
    int x1,x2;
    cin>>a>>b>>c;
    if(a!=0&&a>=-1000&&a<=1000&&b>=-1000&&b<=1000&&c>=-1000&&c<=1000)
    {
        temp=pow(b,2)-4*a*c;
        if(temp<0)
            cout<< "error" <<endl;
        else if(temp==0)
            cout<<-b/2*a<<endl;
        else
        {
            x1=(-b+sqrt(temp))/2*a;
            x2=(-b-sqrt(temp))/2*a;
            if(x1<x2)
                cout<<x1<< " " <<x2<<endl;
            else
                cout<<x2<< " " <<x1<<endl;
        }
    }
    return 0;
}
