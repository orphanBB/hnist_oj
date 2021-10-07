#include <iostream>
#include <iomanip>  //C++按格式输出需要包含此头文件

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<< setw(8) << setfill(' ') <<right<< a <<endl;
    cout<< setw(8) << setfill(' ') <<right<< b <<endl;
    cout<< setw(8) << setfill(' ') <<right<< c <<endl;
    return 0;
}
