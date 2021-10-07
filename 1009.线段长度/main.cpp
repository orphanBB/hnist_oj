#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    cout<<setprecision(2)<<std::fixed<<sqrt(pow((xb-xa),2)+pow((yb-ya),2))<<endl;
    return 0;
}
