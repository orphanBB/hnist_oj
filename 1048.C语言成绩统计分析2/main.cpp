#include <iostream>
#include "iomanip"
#define MAX 100

using namespace std;

int main()
{
    int n,m,a,b,j,i=0;
    double score[MAX],result;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>score[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        for(j=a-1;j<b;j++)
        {
            result+=score[j];
        }
        cout<<setprecision(2)<<std::fixed<<result/(b-a+1)<<endl;
        result=0;
    }
    return 0;
}
