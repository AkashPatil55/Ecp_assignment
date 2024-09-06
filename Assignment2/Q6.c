#include<stdio.h>

int main()
{
	int num;
	printf("Entered 5 digit number: ");
	scanf("%d",&num);

	int rev=0,rem=0,temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	printf("reverse number=%d \n",rev);

	if(temp==rev)
		printf("Number is palandrome \n");

	else
		printf("Number is not palandrome \n");
	


	return 0;
}
