#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{
    char c;
    cin>>c;
    if((c>=65&&c<=90)||(c>=97&&c<=122))
        cout<<"A"<<endl;
    else if(c>=48&&c<=57)
        cout<< "1" <<endl;
    else
        cout<< "#" <<endl;
    return 0;
}
