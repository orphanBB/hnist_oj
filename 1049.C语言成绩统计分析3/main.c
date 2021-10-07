//由Frms(https://github.com/FrmsClY)提供
#include <stdio.h>

int main()
{
    int n, p[1000] = {NULL};
    scanf("%d", &n);

    // 从0开始存储
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    int m, q, read[1000] = {NULL};
    // 要求输入的长度
    scanf("%d", &m);
    
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &q);
        read[j] = q;
    }
    int h = 0;
    for (int k = 0; k < m; k++)
    {
        for (int y = 0; y < n; y++)
        {
            if (p[y] == read[k])
            {
                h = 1;
                break;
            }
        }

        if (h == 1)
        {
            h = 0;
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

        
    }
    return 0;
}