#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (month) 
	{
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The month has 31 days.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The month has 30 days.\n");
            break;
        case 2:
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			{
                printf("The month has 29 days (leap year).\n");
            }
			else
			{
                printf("The month has 28 days.\n");
            }
            break;
        default:
            printf("Invalid month.\n");
    }

    return 0;
}
