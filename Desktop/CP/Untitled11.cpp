#include <stdio.h>
int main()
{
	int month,year;
	printf("Enter a number");
	scanf("%d",&month);
	printf("Enter year");
	scanf("%d",&year);
    if(year%4==0)
	{
    switch(month)
	{
		case 1:
			printf("31");
			break;
		case 2:
			printf("29");
			break;
		case 3:
			printf("31");
			break;
		case 4:
			printf("30");
			break;
		case 5:
			printf("31");
			break;
		case 6:
			printf("30");
			break;	
		case 7:
			printf("31");
			break;
		case 8:
			printf("31");
			break;
		case 9:
			printf("30");
			break;	
		case 10:
			printf("31");
			break;	
		case 11:
			printf("30");
			break;
		case 12:
			printf("31");
			break;
		default:
		    printf("Invalid Choice");	
	}
}
	else{
		switch(month)
	{
		case 1:
			printf("31");
			break;
		case 2:
			printf("28");
			break;
		case 3:
			printf("31");
			break;
		case 4:
			printf("30");
			break;
		case 5:
			printf("31");
			break;
		case 6:
			printf("30");
			break;	
		case 7:
			printf("31");
			break;
		case 8:
			printf("31");
			break;
		case 9:
			printf("30");
			break;	
		case 10:
			printf("31");
			break;	
		case 11:
			printf("30");
			break;
		case 12:
			printf("31");
			break;
		default:
		    printf("Invalid Choice");
		}
	}
}
