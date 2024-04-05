#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    int x,y,temp;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping: x = %d, y = %d", x, y);
    return 0;
}

