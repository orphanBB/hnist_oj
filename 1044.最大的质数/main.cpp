#include <iostream>
#include "cmath"

using namespace std;

int isprime(int num);

int main()
{
    int num,i;
    cin>>num;
    for(i=num-1;i>=2;i--)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}

int isprime(int num)
{
    int i;
    if(num==0||num==1)
        return 0;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
