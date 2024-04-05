#include <stdio.h>
int main()
{
	float ca,ch;
	float attendance;
	char med;
	printf("Classes held\n");
	scanf("%d",&ch);
	printf("Classes attended\n");
	scanf("%d",&ca);
	printf("RESPOND FOR MEDICAL AVAILIBILITY IN y or n\n");
	scanf("%f",&med);
	attendance=(ca/ch)*100;
	printf("Total attendace percentage%f\n",attendance);
	if(attendance>75)
	{
		printf("YOU ARE ELIGIBLE");
	}
	else if (attendance<65)
	{
		printf("YOU ARE NOT ELIGIBLE");
	}
    else if((attendance<75)&&(med=='y'))
	{
		printf("YOU ARE ELIGIBILE");
	}
	else if((attendance<75&&med=='n'))
	{
		printf("YOU ARE NOT ELIGIBILE");
	}
}
