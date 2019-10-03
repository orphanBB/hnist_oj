#include <iostream>

using namespace std;

int main()
{
    int type;
    int a,b,r;
    cin>>type;
    switch(type)
    {
    case 1:
        cin>>a>>b;
        if(a!=0&&b!=0)
            cout<<a*b<<endl;
        break;
    case 2:
        cin>>a>>b;
            if(a!=0&&b!=0)
        cout<<a*b*0.5<<endl;
        break;
    case 3:
        cin>>r;
            if(r!=0)
        cout<<3.14*r*r<<endl;
        break;
    }
    return 0;
}
