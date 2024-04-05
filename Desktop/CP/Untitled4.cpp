#include <stdio.h>
int main()
{
	int basic,hra,da,total;
	printf("Enter basic salary");
	scanf("%d",&basic);
	if(basic<1500)
	{
		total=basic+(0.1*basic)+(0.9*basic);
		printf("salary%d",total);
	}
	else
	{
		total=basic+500+(0.98*basic);
		printf("salary%d",total);
	}
}
