#include<stdio.h>

//--------------using simple if else ----------------//

/*

int main()
{
	int year,days;

	printf("Enter the year: ");
	scanf("%d",&year);

	if(year%400==0)
	{
		days=366;
		printf("leap year and days=%d",days);
	}

	else if(year%100==0)
	{
		days=365;
		printf("not leap year days=%d",days);
	}

	else if(year%4==0)
	{
		days=366;
		printf("leap year and days=%d",days);
	}
	else
	{
		days=365;
		printf("not leap year and days=%d",days);
	}

	return 0;
}
*/

//---------using logical operator-----------------//

/*
int main()
{
	int year,days;
	printf("Enter year: ");
	scanf("%d",&year);

	if(year%400==0 || year%100!=0 && year%4==0)
	{
		days=366;
		printf("leap year and days=%d\n",days);
	}
	else
	{
		days=365;
		printf("not leap year and days=%d\n",days);
	}

	return 0;
}
*/

//----------using conditional operator---------------//

int main()
{
	int year,days;
	printf("enter year: ");
	scanf("%d",&year);

	(year%400==0 || year%100 !=0 && year%4==0) ? printf("leap year and days=%d",days=366) : printf("not leap year and days=%d",days=365);

	return 0;
}


