#include <stdio.h>
int main() 
{
	printf("Name:Jay Soni\nRoll no.:2310991943\n");
    int num1, num2, big, num3;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Enter 3rd Number: ");
    scanf("%d", &num3);
    big = (num1 > num2 && num1 > num3 ? num1 : num2 > num3 ? num2: num3);
    printf("The Greatest Number is: %d", big);
    return 0;
}
