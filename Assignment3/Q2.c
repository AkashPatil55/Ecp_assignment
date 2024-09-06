#include<stdio.h>

int main()
{
	int num,i=1;
	printf("Enter number: ");
	scanf("%d",&num);

	while(i<=10)
	{
		int res=num*i;	
		printf("%d * %d=%d\n",num,i,res);
		i++;
	}
	return 0;
}
