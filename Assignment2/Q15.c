#include <stdio.h>

int main()
{
    int day, month, year;
    int y, d;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    y = year;
    if (month <= 2) 
	{
        y--;
        month += 12;
    }
    d = day + (13 * (month + 1)) / 5 + y + y / 4 - y / 100 + y / 400;
    d %= 7;

    switch (d) 
	{
        case 0:
            printf("The day of the week is Sunday.\n");
            break;
        case 1:
            printf("The day of the week is Monday.\n");
            break;
        case 2:
            printf("The day of the week is Tuesday.\n");
            break;
        case 3:
            printf("The day of the week is Wednesday.\n");
            break;
        case 4:
            printf("The day of the week is Thursday.\n");
            break;
        case 5:
            printf("The day of the week is Friday.\n");
            break;
        case 6:
            printf("The day of the week is Saturday.\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
