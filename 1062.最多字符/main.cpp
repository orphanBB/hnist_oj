/*����ASCII���*/
#include <iostream>
#include "cstring"
#define MAX 128      //ASCII�����128���ַ�

using namespace std;

int main()
{
    string input_content;  //ÿһ�����������
    string::iterator i;    //����������������input_content
    while(getline(cin,input_content))    //�������룬��Ҫ���մ��ո���ַ�����ʹ��getline()
    {
        int cnt[MAX]={0},frequency=0,k=0;   //cnt�����¼ÿ��ascii��ֵ��Ӧ���ַ����ֵĴ�����frequency��¼���Ĵ�����k��¼asciiֵ����ת�����ַ�
        for(i = input_content.begin(); i != input_content.end();i++)   //ʹ�õ����������ַ���
        {
            cnt[(int)*i]++;   //ÿ����һ���ַ���������ascii���Ӧ��cnt�����е�λ���ۼ�
        }
        for(int j=0;j<128;j++)   //����ascii�������ҵ����ִ��������ַ�
        {
            if(cnt[j]>frequency&&char(j)!=' ')  //ÿ����һ��Ԫ�ؾͱȽϴ�С�������ų��ո�
            {
                frequency=cnt[j];  //�õ����ִ��������ַ��Ĵ���
                k=j;   //�õ���Ӧ��ascii��ֵ
            }
        }
        cout << (char)k <<" " << frequency<<endl;  //ǿ��ת����������ַ����������ִ���
    }
    return 0;
}

/*˫��ѭ��*/
//#include <iostream>
//#include "cstring"
//#define MAX 128      //ASCII�����128���ַ�
//
//using namespace std;
//
//int main()
//{
//    string input_content;  //ÿһ�����������
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

