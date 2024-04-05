#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    float num1,num2,addition,subtraction,multiplication,division;
    printf("Enter num1:");
    scanf("%f",&num1);
    printf("Enter num2:");
    scanf("%f",&num2);
    addition=num1+num2;
    subtraction=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
    printf("Addition:%.2f\n",addition);
    printf("Subtraction:%.2f\n",subtraction);
    printf("Multiplication:%.2f\n",multiplication);
    printf("Division:%.2f\n",division);
    return 0;
}

