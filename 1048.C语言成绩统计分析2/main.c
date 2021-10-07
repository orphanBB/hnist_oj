
//由Frms(https://github.com/FrmsClY)提供
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n, score[1000], m, start, end, cache, sum = 0;
	float avg[1000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}

	scanf("%d", &m);
	for (int j = 0; j < m; j++)
	{
		scanf("%d %d", &start, &end);
		cache = end - start + 1;
		while ( start <= end)
		{
			sum += score[start - 1];
			start++;
		}
		avg[j] = sum / ((float)cache);
		sum = 0;
	}

	for (int y = 0; y < m; y++)
	{
		printf("%.2f\n", avg[y]);
	}
	return 0;
}