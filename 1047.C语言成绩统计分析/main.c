//由Frms(https://github.com/FrmsClY)提供
#include <stdio.h>

int main()
{
    int n, p[1000] = {NULL};
    scanf("%d", &n);

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
        read[j] = p[q-1];
    }

    for (int y = 0; y < m; y++)
    {
        printf("%d\n", read[y]);
    }
    return 0;
}