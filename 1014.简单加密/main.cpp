#include <iostream>

using namespace std;

int main()
{
    int i;
    char c[3];
    cin>>c;
    for(i = 0;i<3;i++)
    {
        c[i]+=2;
        cout<<c[i];
    }
    return 0;
}
