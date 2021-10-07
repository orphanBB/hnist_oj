#include <iostream>

using namespace std;

int main()
{
    int n,x,m,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        if(x>0&&x<=n&&a[x-1]%2==0)
            cout<< "yes" <<endl;
        else
            cout<< "no" <<endl;
    }
    return 0;
}
