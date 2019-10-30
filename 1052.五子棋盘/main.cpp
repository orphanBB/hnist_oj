#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x,y,q,pan[100][100]={0};
    cin>>n>>m;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        pan[x-1][y-1]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<pan[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
