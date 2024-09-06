#include<stdio.h>

int main()
{
	char chr; int num;

	printf("Enter the character: ");
	scanf("%c",&chr);

	printf("Enter number: ");
	scanf("%d",&num);

	while(num!=0)
	{
		printf("%c",chr);
		num--;
	}
	printf("\n");

	return 0;
}
