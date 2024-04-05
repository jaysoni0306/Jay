#include <stdio.h>
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int double1(arr,int m)
{
	for(int i=0;i<5;i++)
	{
		arr[i]=2*arr[i];
	}
	return arr;
}
