#include <stdio.h>
int main()
{
	int month;
	printf("Enter a number");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("January\nfeb");
			break;
		case 2:
			printf("Feb\nmarch");
			break;
		case 3:
			printf("MARCH\napril");
			break;
		case 4:
			printf("april\nmay");
			break;
		case 5:
			printf("may\njune");
			break;
		case 6:
			printf("june\njuly");
			break;	
		case 7:
			printf("july\naug");
			break;
		case 8:
			printf("aug\nsep");
			break;
		case 9:
			printf("sep\noct");
			break;	
		case 10:
			printf("oct\nnov");
			break;	
		case 11:
			printf("nov\ndec");
			break;
		case 12:
			printf("dec\njan");
			break;
		default:
		    printf("Invalid Choice");	
	}
}
