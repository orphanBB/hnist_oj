#include <iostream>

using namespace std;

int main()
{
    int n,i,j,flag=0;
    int num[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
                flag++;
        }
    }
    cout<<flag<<endl;
    return 0;
}
