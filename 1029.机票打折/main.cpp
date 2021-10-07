#include <iostream>
#include "iomanip"

using namespace std;

int main()
{
    int price;
    cin>>price;
    if(price>=200&&price<500)
        cout<< setprecision(2)<<std::fixed<<price*0.9<<endl;
    else if(price>=500&&price<1000)
        cout<< setprecision(2)<<std::fixed<<price*0.8<<endl;
    else if(price>=1000)
        cout<< setprecision(2)<<std::fixed<<price*0.5<<endl;
    else if(price>=0&&price<200)
        cout<< setprecision(2)<<std::fixed<<price*1.00<<endl;
    return 0;
}
