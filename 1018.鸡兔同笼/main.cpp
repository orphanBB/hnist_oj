#include <iostream>

using namespace std;

int main()
{
    int m,n;  //m为头，n为脚
    int i;
    cin>>m>>n;
    if(m%2==1||n<m*2)  //排除不合理的输入
        return 0;
    for(i=0;i<=m;i++)  //设i为兔子的个数
    {
        if((i*4+(m-i)*2) == n)
            cout<<m-i<< " " <<i<<endl;
    }
    return 0;
}
