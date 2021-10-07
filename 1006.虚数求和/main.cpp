#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double xa,ya,xb,yb;

    cin>>xa>>ya;
    cin>>xb>>yb;
    cout<<setprecision(2)<<std::fixed<<xa+xb<<" "<<ya+yb<<"i"<<endl;
    return 0;
}
