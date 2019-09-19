//题目描述
//从键盘上输入一个字符，用它构造一个边长是3个字符的正方形。
//
//输入格式
//输入只有一行，仅包含一个字符；
//
//输出格式
//输出边长是3个字符的正方形。
#include <iostream>

using namespace std;

int main()
{
    char c;
    int i,j;
    cin>>c;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
