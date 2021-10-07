#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    int n,m,t,j,i=0;
    int score[MAX];
    int find=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>score[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>t;
        for(j=0;j<n;j++)
        {
            if(score[j]==t)
            {
                cout<< "yes"<<endl;
                find=1;
                break;  //ÐèÒªbreak
            }

        }
        if(find==0)
            cout<< "no" <<endl;
        find=0;
    }
    return 0;
}
