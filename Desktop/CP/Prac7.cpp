#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    int n1, n2, n3;
    printf("Enter three different numbers: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3){
        printf("%d is the largest number.", n1);}
    else if (n2 >= n1 && n2 >= n3){
        printf("%d is the largest number.", n2);}
    else{
        printf("%d is the largest number.", n3);}
    return 0;
}

