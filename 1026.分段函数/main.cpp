#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x<0)
    {
        cout<<x*x-1<<endl;
    }
    else if(x>=0&&x<1)
    {
        cout<<x*x<<endl;
    }
    else if(x>=1)
    {
        cout<<x*x+1<<endl;
    }
    return 0;
}
