/*构建ASCII码表*/
#include <iostream>
#include "cstring"
#define MAX 128      //ASCII码最多128个字符

using namespace std;

int main()
{
    string input_content;  //每一组输入的内容
    string::iterator i;    //迭代器，用来遍历input_content
    while(getline(cin,input_content))    //多组输入，需要接收带空格的字符串，使用getline()
    {
        int cnt[MAX]={0},frequency=0,k=0;   //cnt数组记录每个ascii码值对应的字符出现的次数，frequency记录最多的次数，k记录ascii值用来转换成字符
        for(i = input_content.begin(); i != input_content.end();i++)   //使用迭代器遍历字符串
        {
            cnt[(int)*i]++;   //每遍历一个字符，即在其ascii码对应的cnt数组中的位置累加
        }
        for(int j=0;j<128;j++)   //遍历ascii码数组找到出现次数最多的字符
        {
            if(cnt[j]>frequency&&char(j)!=' ')  //每遍历一个元素就比较大小，并且排除空格
            {
                frequency=cnt[j];  //拿到出现次数最多的字符的次数
                k=j;   //拿到对应的ascii码值
            }
        }
        cout << (char)k <<" " << frequency<<endl;  //强制转换输出最多的字符，输出其出现次数
    }
    return 0;
}

/*双重循环*/
//#include <iostream>
//#include "cstring"
//#define MAX 128      //ASCII码最多128个字符
//
//using namespace std;
//
//int main()
//{
//    string input_content;  //每一组输入的内容
//    while(getline(cin,input_content))
//    {
//        int n=input_content.length();
//        int tmp_cnt,cnt=0,m=0;
//        for(int j=0;j<n;j++)
//        {
//            tmp_cnt=0;
//            for(int k=j;k<n;k++)
//            {
//                if(input_content[j]==input_content[k]&&input_content[j]!=' ')
//                {
//                    tmp_cnt++;
//                }
//            }
//            if(tmp_cnt>cnt)
//            {
//                cnt=tmp_cnt;
//                m=j;
//            }
//            if(tmp_cnt==cnt&&(int)input_content[j]<(int)input_content[m])
//            {
//                m=j;
//            }
//        }
//        cout << (char)input_content[m] << " " << cnt << endl;
//    }
//    return 0;
//}

