#include <stdio.h>
int main()
{
	int quantity,price,tprice;
	printf("Please enter quantity");
	scanf("%d",&quantity);
	printf("Please enter price");
	scanf("%d",&price);
	tprice=price*quantity;
	if(quantity>1000)
	{
		tprice=(price-price*0.1)*quantity;
		printf("Total price%d",tprice);
	}
	return 0;
}
