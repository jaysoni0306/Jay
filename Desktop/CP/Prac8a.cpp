#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    char x;
    printf("Enter any Alphabet:");
    scanf("%c", &x);
    switch (x){
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;}
    return 0;
}

