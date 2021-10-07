#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>=0&&a<=10)
        cout<<a*6<<endl;
    else if(a>10&&a<=20)
        cout<<(a-10)*7+60<<endl;
    else if(a>20)
        cout<<(a-20)*10+130<<endl;
    return 0;
}
