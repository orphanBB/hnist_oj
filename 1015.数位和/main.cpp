#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>=100&&a<=999)
    {
        cout<<a/100<< " " <<a/10%10<< " " <<a%10<<endl;
        cout<<a/100+a/10%10+a%10<<endl;
    }
    return 0;
}
