#include <stdio.h>
int main()
{
    printf("Name:Jay Soni\nRoll no.:2310991943\n");
    float radius,area,circumference;
    printf("Enter radius:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of the circle is %f\n",area);
    circumference=2*3.14*radius;
    printf("Circumference of the circle is %f",circumference);
    return 0;
}

