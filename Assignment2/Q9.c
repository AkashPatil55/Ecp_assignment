#include<stdio.h>

int main()
{
	int year,month,days;
	printf("Enter year: ");
	scanf("%d",&year);
	printf("Enter for Month: ");
	scanf("%d",&month);
/*
	if(month==1)
    {
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12)\n");
    }


	return 0;
}
*/

	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		printf("31 days \n");
	else if(month==4 || month==6 || month==9 || month==11)
		printf("30 days \n");
	else
		printf("28 or 29 days \n");
	
	return 0;

}



