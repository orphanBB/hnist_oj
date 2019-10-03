#include <iostream>
#include "cmath"
#include "iomanip"

using namespace std;

int main()
{
    int a,b,c,k,A;
    double temp;
    cin>>a>>b>>c;
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        cout<< "ERROR" <<endl;
        return 0;
    }
    if(a<b)
    {
        k=a;a=b;b=k;
    }
    if(a<c)
    {
        k=a;a=c;c=k;
    }
    if(b<c)
    {
        k=b;b=c;c=k;
    }
    A=cos(b*b+c*c-a*a/2*b*c);
    temp=(double)(a+b+c)/2;
    cout<< setprecision(2) << std::fixed << sqrt(temp*(temp-a)*(temp-b)*(temp-c))<<endl;
    return 0;
}
