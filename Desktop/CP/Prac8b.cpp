#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    switch (num>0){
    case 1:
        printf("Positive number!");
        break;
    case 0:
        switch (num<0){
        case 1:
            printf("Negative number!");
            break;
        default:
            printf("Zero!");
            break;}
        }
    return 0;
}

