#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    int x,y;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    if (y == 0){
        y = x;
        x = 0;}
    else if (x == 0){
        x = y;
        y = 0;}
    else{
        x = x * y;
        y = x / y;
        x = x / y;}
    printf("After Swapping: x = %d, y = %d", x, y);
    return 0;
}

