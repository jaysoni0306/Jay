#include <stdio.h>
int main()
{
	int x=0;
	int b;
	scanf("%d", &b);
	for(int i=b;i>=1;i--)
	{
		for(int j=1;j<i+1;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		x=x+1;
		for(int a=0;a<x;a++)
		{
			printf(" ");
		}
	}
	return 0;
}
