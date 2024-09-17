#include <stdio.h>

int main()
{
    int employeeId, deptNo;
    char designationCode;

    printf("Enter Employee ID: ");
    scanf("%d", &employeeId);

    printf("Enter Department No: ");
    scanf("%d", &deptNo);

    printf("Enter Designation Code: ");
    scanf(" %c", &designationCode);

    switch (deptNo) 
	{
        case 10:
            switch (designationCode) 
			{
                case 'M':
                    printf("Employee with employee id %d is working in \"Marketing\" department as \"Manager\".\n", employeeId);
                    break;
                default:
                    printf("Invalid designation code for department 10.\n");
            }
            break;
        case 20:
            switch (designationCode)
			{
                case 'S':
                    printf("Employee with employee id %d is working in \"Management\" department as \"Supervisor\".\n", employeeId);
                    break;
                default:
                    printf("Invalid designation code for department 20.\n");
            }
            break;
        case 30:
            switch (designationCode)
			{
                case 's':
                    printf("Employee with employee id %d is working in \"Sales\" department as \"Security Officer\".\n", employeeId);
                    break;
                default:
                    printf("Invalid designation code for department 30.\n");
            }
            break;
        case 40:
            switch (designationCode) 
			{
                case 'C':
                    printf("Employee with employee id %d is working in \"Designing\" department as \"Clerk\".\n", employeeId);
                    break;
                default:
                    printf("Invalid designation code for department 40.\n");
            }
            break;
        default:
            printf("Invalid department number.\n");
    }

    return 0;
}
