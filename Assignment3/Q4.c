#include<stdio.h>

int main()
{
	int num,fact=1;

	printf("Enter number:");
	scanf("%d",&num);

	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("factorial=%d\n",fact);


	return 0;
}

