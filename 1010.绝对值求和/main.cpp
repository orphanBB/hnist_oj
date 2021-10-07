#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    cout<<setprecision(1)<<std::fixed<<abs(a)+abs(b)<<endl;
    return 0;
}
