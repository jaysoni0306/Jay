//#include <stdio.h>
//int main(){
//	int sum, i;
//	sum=0;
//	for(i=1;i<=10;i++){
//		sum=sum+i;
//	}
//	printf("Sum of first 10 integer: %d\n",sum);
//	int even();
//}
//
//int even(){
//	int i;
//	for(i=1;i<=10;i++){
//		if (i%2==0){
//			printf("\n%d",i);
//		}
//	}
//	int fac();
//}
//
//int fac(){
//	int i, num, fact=1;
//	printf("\n\nEnter a number: ");
//	scanf("%d",&num);
//	for(i=1;i<=num;i++){
//		fact=fact*i;
//	}
//	printf("Factorial of %d is: %d",num, fact);
//	int exc();
//}
#include <stdio.h>
#include <math.h>
int main(){
	int i, a, b, num, raise=1;
	printf("\n\nEnter first number:");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);
	for(i=1;i<=b;i++){
		raise=raise*a;
	}
	printf("%d raise to the power %d is: %d",a,b,raise);
}
