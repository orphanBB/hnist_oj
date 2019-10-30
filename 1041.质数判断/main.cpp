#include <iostream>
#include "cmath"

using namespace std;

int main()
{
    int num,i;
    cin>>num;
    if(num==0||num==1)
    {
        cout<< "No" <<endl;
        return 0;
    }
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<< "No" <<endl;
            return 0;
        }
    }
    cout<< "Yes" <<endl;
    return 0;
}
