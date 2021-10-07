#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char s[255];

	scanf("%s", s);

	int count = 0;
	char c;
	for (int i = 0; i < 255; i++)
	{
		c = s[i];

		if (c == '#')
		{
			break;
		}
		else if(c == '(')
		{
			count++;
		}
		else if(c == ')')
		{
			if (count <= 0)
			{
				printf("NO");
				return 0;
			}
			else
			{
				count--;
			}
		}
	}

	if (count)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}