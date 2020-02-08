#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    int m,n,num[MAX][MAX],q,k,temp[MAX];
    int i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>num[i][j];
        }
    }
    cin>>q;
    for(k=0;k<q;k++)
    {
        cin>>i>>j;
        temp[k]=num[i-1][j-1];
    }
    for(k=0;k<q;k++)
    {
        cout<<temp[k]<<endl;
    }
    return 0;
}
