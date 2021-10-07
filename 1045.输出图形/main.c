//由Frms(https://github.com/FrmsClY)提供
#include <stdio.h>

int main()
{
    //void out(int a, int b);
    char index;
    char start = (index = getchar());

    for (; start >= 'A'; start--)
    {
        out(start, index);
    }

    return 0;
}

void out(char c, int s)
{
    for (int i = c; i < s; i++)
    {
        printf(" ");
    }

    for (int j = c; j >= 'A'; )
    {
        printf("%c", (char)(j--));
    }

    for (int p = 'A'; p < c; )
    {
        printf("%c", (char)(p++));
    }
    if (c != 'A')
    {
        printf("\n");
    }
}