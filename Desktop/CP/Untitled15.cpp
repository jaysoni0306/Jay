#include <stdio.h>
int main()
{
	int i,fac=1,a=1;
	printf("Enter a number");
	scanf("%d",&i);
	do
	{
		fac=a*fac;
		a++;
	}
	while(i>=a);
	printf("factorial %d",fac);
}
