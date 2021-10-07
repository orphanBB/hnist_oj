/*使用库函数*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
	string str;
	cin>>str;
	reverse(str.begin(), str.end());
	cout<<str<<endl;
	return 0;
}

/*编写自定义函数*/
//#include <iostream>
//#include "cstring"
//#define MAX 10
//using namespace std;
//
//void Reverse(char *str);
//
//int main()
//{
//    char str[MAX];
//    cin>>str;
//    Reverse(str);
//    cout<<str<<endl;
//    return 0;
//}
//
//void Reverse(char *str)
//{
//	if(NULL == str)
//	{
//		return ;
//	}
//	char *pBegin = str;
//	char *pEnd   = str + strlen(str) - 1;
// 	char tmp;
//	while(pBegin < pEnd)
//	{
//		tmp = *pBegin;
//		*pBegin = *pEnd;
//		*pEnd = tmp;
//		pBegin ++, pEnd --;
//	}
//}



