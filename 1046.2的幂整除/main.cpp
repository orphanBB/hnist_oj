#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    int n,result=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%(int)pow(2,i)==0)
            result=i;
    }
    cout<<result<<endl;
    return 0;
}
