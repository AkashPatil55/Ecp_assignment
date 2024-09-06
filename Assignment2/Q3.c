#include<stdio.h>

int main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);

	if(no>0)
		printf("Entered number is positive");

	else if(no<0)
	{
		printf("Entered number is Negative");
	}
		
	else
	{
		printf("Entered number is zero");
	}

return 0;
}
