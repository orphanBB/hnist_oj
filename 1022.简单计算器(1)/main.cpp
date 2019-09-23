#include <iostream>
#include "string.h"
#include "iomanip"
#define MAX 10
using namespace std;

int error = -1;
void caculate(char *str,int a,int method);

int main()
{
    char str[MAX];
    double result;
    int i;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='+')
        {
            caculate(str,i,1);
            return 0;
        }

        else if(str[i]=='-')
        {
            caculate(str,i,2);
            return 0;
        }

        else if(str[i]=='*')
        {
            caculate(str,i,3);
            return 0;
        }
        else if(str[i]=='/')
        {
            caculate(str,i,4);
            return 0;
        }

    }
    if(i==strlen(str))
    cout<< error <<endl;
    return 0;
}

void caculate(char *str,int a,int method)
{
    int i;
    double num1,num2,result;
    num1=str[0]-48;
    num2=str[a+1]-48;
    for(i=1;i<a;i++)
    {
        num1=num1*10+str[i]-48;
    }
    for(i=a+2;i<strlen(str);i++)
    {
        num2=num2*10+str[i]-48;
    }
    switch(method)
    {
        case 1:
            result=num1+num2;
            break;
        case 2:
            result=num1-num2;
            break;
        case 3:
            result=num1*num2;
            break;
        case 4:
            {
                if(num2==0)
                    result = error;
                else
                    result=num1/num2;
                break;
            }
        default:
            result = error;
    }
    if(result/(int)result!=1)
        cout<< setprecision(1) << std::fixed << result <<endl;
    else
        cout<<result<<endl;
}
