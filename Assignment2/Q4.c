#include<stdio.h>

/*
int main()
{
	int no1,no2;
	printf("Enter no1 & no2: ");
	scanf("%d%d",&no1,&no2);
	
	if(no1>no2)
	{
		printf("First number is greater=%d \n",no1);
	}
	else
	{
		printf("Second number is greater=%d \n",no2);
	}

return 0;
}
*/

int main()
{
	int no1,no2;
	printf("Enter no1 & no2: ");
	scanf("%d%d",&no1,&no2);

	(no1>no2) ? printf("First number is greater=%d\n",no1):printf("Second number is greater=%d",no2);

return 0;
}

