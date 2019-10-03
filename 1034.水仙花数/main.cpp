#include <iostream>
#include "cmath"

using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num<100||num>999)
    {
        cout<< "ERROR" <<endl;
        return 0;
    }
    if(pow(num%10,3)+pow(num/10%10,3)+pow(num/100,3)==num)
        cout<< "yes" <<endl;
    else
        cout<< "no" <<endl;
    return 0;
}
