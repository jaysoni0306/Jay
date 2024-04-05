#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    float u,a,t,b,c,p,V,S,T,H;
    printf("Enter u:");
    scanf("%f",&u);
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter t:");
    scanf("%f",&t);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    printf("Enter p:");
    scanf("%f",&p);
    V= u+a*t; S= u*t+0.5*a*t*t;
    T= 2*a+sqrt(b)+9*c; H= sqrt(b*b)+p*p;
    printf("V:%.2f\n",V);
    printf("S:%.2f\n",S);
    printf("T:%.2f\n",T);
    printf("H:%.2f\n",H);
    return 0;
}

