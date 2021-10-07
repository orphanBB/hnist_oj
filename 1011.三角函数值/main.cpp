#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a;
    cin>>a;
    if(a>=-360&&a<=360)
        cout<<setprecision(2)<<std::fixed<<sin(a/180.0*3.14)<<"\n"<< cos(a/180.0*3.14)<<endl;
    return 0;
}
