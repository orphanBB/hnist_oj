#include <iostream>

using namespace std;

int main()
{
    int n,result=1;
    cin>>n;
    while(n)
    {
        result*=n;
        n--;
    }
    cout<<result<<endl;
    return 0;
}
