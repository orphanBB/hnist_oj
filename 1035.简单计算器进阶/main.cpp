#include <iostream>
#define MAX 20
using namespace std;

int main()
{
    int n,temp=0,result=0;
    cin>>n;
    if(n<=0)
        return 0;
    for(;n>0;n--)
    {
        cin>>temp;
        result+=temp;
    }
    cout<<result<<endl;
    return 0;
}
