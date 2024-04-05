#include <stdio.h>

main()
{
int n,last_digit,next_digit,total;
printf("Enter any five digit number:\n");
scanf("%d",&n);
last_digit=n%10;
total=last_digit;
next_digit=(n/10)%10;
total=total+next_digit;
next_digit=(n/100)%10;
total=total+next_digit;
next_digit=(n/1000)%10;
total=total+next_digit;
next_digit=(n/10000)%10;
total=total+next_digit;
printf("the sum is %d",total);
}
