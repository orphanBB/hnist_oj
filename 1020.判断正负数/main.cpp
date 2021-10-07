#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a==0)
        cout<< "zero" <<endl;
    else if(a<0)
        cout<< "negative" <<endl;
    else
        cout<< "positive" <<endl;
    return 0;
}
