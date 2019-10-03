#include <iostream>
#include "iomanip"

using namespace std;

int main()
{
    int n,temp,i,result=0;
    cin>>n;
    i=n;
    while(i)
    {
        cin>>temp;
        result+=temp;
        i--;
    }
    cout<< setprecision(2) << std::fixed <<(double)result/n<<endl;
    return 0;
}
