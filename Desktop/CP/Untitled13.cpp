#include <stdio.h>
int main()
{
	int i,fac=1,a=1;
	printf("Enter a number");
	scanf("%d",&i);
	while(i>=a)
	{
		fac=a*fac;
		a++;
	}
	printf("factorial %d",fac);
}
