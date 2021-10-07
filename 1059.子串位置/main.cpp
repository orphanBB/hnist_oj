#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.find(b)+1<<endl;
    return 0;
}

//自符串的find()函数，find(str)，如果找到了返回第一个的位置，如果没找到返回string:npos
//string:npos的定义为：static const size_type npos = -1;可以看成是-1
