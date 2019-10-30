#include <iostream>

using namespace std;

int main()
{
    int n,i,temp,result=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<0)
            break;
        else
            result+=temp;
    }
    cout<<result<<endl;
    return 0;
}
