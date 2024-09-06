#include<stdio.h>

int main()
{
	int num,res;
	printf("Enter number: ");
	scanf("%d",&num);

	for(int i=1;i<=10;i++)
	{
		res=i*num;
		printf("%d\n",res);
	}

return 0;
}

