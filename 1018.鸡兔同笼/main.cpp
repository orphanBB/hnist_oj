#include <iostream>

using namespace std;

int main()
{
    int m,n;  //mΪͷ��nΪ��
    int i;
    cin>>m>>n;
    if(m%2==1||n<m*2)  //�ų������������
        return 0;
    for(i=0;i<=m;i++)  //��iΪ���ӵĸ���
    {
        if((i*4+(m-i)*2) == n)
            cout<<m-i<< " " <<i<<endl;
    }
    return 0;
}
