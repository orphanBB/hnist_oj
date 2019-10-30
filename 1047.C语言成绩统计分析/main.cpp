#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    int n,m,t,i=0;
    int score[MAX];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>score[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>t;
        cout<<score[t-1]<<endl;
    }
    return 0;
}
