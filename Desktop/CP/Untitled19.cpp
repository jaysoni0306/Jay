#include <stdio.h>

int main()
{
    int f0 = 0, f1 = 1, n, f;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("0\n1\n");

    for (int i = 0; i < n - 2; i++)
    {
        f = f0;
        f0 = f1;
        f1 = f + f0;
        printf("%d\n", f1);
    }

    return 0;
}
