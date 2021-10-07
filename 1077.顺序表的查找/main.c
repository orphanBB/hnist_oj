#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int n, arr[10000] = { NULL };
	scanf("%d", &n);
	int pos[10000] = { NULL }, temp;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[i] = temp;
	}

	int m, length = 0, flag;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		flag = 1;
		scanf("%d", &temp);
		
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == temp)
			{
				pos[length] = j + 1;
				flag = 0;
				j = n;
			}
		}

		if (flag)
		{
			pos[length] = -1;
		}
		length++;
	}

	for (int i = 0; i < length; i++)
	{
	
		if (pos[i] > 0)
		{
			printf("%d\n", pos[i]);
		}
		else
		{
			printf("No Found!\n");
		}
	}

	return 0;
}