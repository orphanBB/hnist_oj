#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>=0&&a<=100&&b>=0&&b<=100&&c>=0&&c<=100)
        cout<<setprecision(1)<<std::fixed<<(a+b+c)/3.0<<endl;
    return 0;
}

