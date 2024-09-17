#include<stdio.h>

int main()
{
	int b=0;
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num!=0)
	{
		int a;
		a = num % 2;
		if(a ==1)
		{
			b += 1;
			printf("%d ",a);
		}
		num = num/2;


	}
	printf("No of 1 is %d ",b);
	return 0;
}
