#include <iostream>

using namespace std;

int main()
{
    double a;
    cin>>a;
    if(a<=100&&a>=90)
        cout<< "A" <<endl;
    else if(a>=80&&a<90)
        cout<< "B" <<endl;
    else if(a>=70&&a<80)
        cout<< "C" <<endl;
    else if(a>=60&&a<70)
        cout<< "D" <<endl;
    else if(a>=0&&a<60)
        cout<< "E" <<endl;
    else
        return 0;
    return 0;
}
