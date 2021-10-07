#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>0&&a<50)
        cout<<(50-a)/10<< "\n" <<(50-a)%10<<endl;
    return 0;
}
