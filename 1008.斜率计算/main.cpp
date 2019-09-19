#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    if(xa!=xb)
        cout<<setprecision(2)<<std::fixed<<(yb-ya)/(xb-xa)<<endl;
    return 0;
}
