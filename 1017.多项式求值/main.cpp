#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a1,a2,a3,n,x;    //分别表示三个系数、常数项、X的值
    cin>>a1>>a2>>a3>>n>>x;
    cout<<setprecision(2)<<std::fixed<<a1*pow(x,3)+a2*pow(x,2)+a3*x+n<<endl;
    return 0;
}
