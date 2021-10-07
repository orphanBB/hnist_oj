#include<stdio.h>
 
 
int elimination(int a[], int count){ //去除数组中重复的元素
	int i, j, k;
 
	for (i = 0; i < count; i++){
		for (j = i + 1; j < count; j++){
			if (a[j] == a[i]){
				for (k = j + 1; k< count; k++)
					a[k - 1] = a[k];
				count--;
				j--;
			}
 
		}
 
	}
 
	return count;
}
 
int main(){
	int a[10000];
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	int count = elimination(a, n);
	printf("%d\n", count);
	for (int i = 0; i < count; i++){
		printf("%d ", a[i]);
	}
	return 0;
}