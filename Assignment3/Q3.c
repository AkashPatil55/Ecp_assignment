#include<stdio.h>

//-----sum of digit---------------//

int main()
{
	int num1,sum=0,rem;
	printf("enter number: ");
	scanf("%d",&num1);
	int num=num1;
	while(num1>0)
	{
		rem=num1%10;
		sum=sum+rem;
		num1=num1/10;
	}
	printf("num=%d = %d\n",num,sum);

	return 0;
}
