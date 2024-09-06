#include<stdio.h>

int main()
{
	int quantity;
	float discount;
	int unit_price=5;

	printf("Enter the quantity: ");
	scanf("%d",&quantity);
	
	int total=quantity*5;
	
	if(quantity>=30 && quantity<50)
	{
		
		discount=total-(total*10/100);

		printf("total=%d and after discount=%2f\n",total,discount);
	}
	else if(quantity>=50)
	{
		
		discount=total-(total*15/100);

		printf("total=%d and after discount=%2f\n",total,discount);
	}
	else
	
		printf("total=%d",total);

	return 0;
}

