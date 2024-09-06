#include<stdio.h>

int main()
{

	int no1,no2;

	printf("Enter for no1,no2:");
	scanf("%d%d",&no1,&no2);

	if(no2==0)
	{
		printf("Not possible");
	}
	else
	{
		int res=no1/no2;
		printf("Result=%d\n",res);
	}

return 0;
}
