#include <iostream>

using namespace std;

int main()
{
    int num=0,i,k=0,temp;
    cin>>num;
    if(num<0)
        return 0;
    for(i=1;i<=num;i++)
    {
        temp=i;
        while(temp)
        {
            if(temp%10==9)
                k++;
            temp/=10;
        }
    }
    cout<<k<<endl;
    k=0;
    return 0;
}
