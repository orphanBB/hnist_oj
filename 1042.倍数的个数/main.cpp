#include <iostream>

using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
    while(n)
    {
        if(n%2==0||n%3==0||n%5==0)
            i++;
        n--;
    }
    cout<<i<<endl;
    return 0;
}
