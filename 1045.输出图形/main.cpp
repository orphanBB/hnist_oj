#include <iostream>

using namespace std;

int main()
{
    int i,j;
    char c;
    cin>>c;
    for(j=0;j<=(c-'A');j++)
    {
        for(i=0;i<j;i++)
            cout<<" ";
        for(i=j;i<=(c-'A');i++)
        {
            cout<<(char)(c-i);
        }
        for(i='A';i<c-j;i++)
        {
            cout<<(char)i;
        }
        cout<<endl;
    }
    return 0;
}
