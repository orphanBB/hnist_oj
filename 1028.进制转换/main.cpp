#include <iostream>

using namespace std;

int main()
{
    int num,i=0;
    int dec[100]={0};
    cin>>num;
    while(num)
    {
       dec[i]=num%2;
       num/=2;
       i++;
    }
    i--;
    for(;i>=0;i--)
    {
        cout<<dec[i];
    }
    return 0;
}
