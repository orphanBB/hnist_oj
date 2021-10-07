#include <iostream>
#include "stdio.h"
#include "string.h"

using namespace std;

int main()
{
    char str[1000];
    int i,count=0;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=121))
        {
            count++;
            while(((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=121))&&str[i]!='\0')
                i++;
        }
    }
    cout<< count <<endl;
    return 0;
}

