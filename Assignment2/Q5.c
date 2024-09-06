#include<stdio.h>

/*
int main()
{
	int no1,no2,no3;

	printf("Enter for three numbers no1,no2,no3: ");
	scanf("%d%d%d",&no1,&no2,&no3);

	if(no1>no2 && no1>no3)
		printf("No1=%d is greater number\n",no1);
	
	else if(no2>no3)
		printf("No2=%d is greater\n",no2);

	else
		printf("No3=%d is greater number\n",no3);


return 0;
}
*/

int main()
{
	int num1,num2,num3;
	printf("Enter for num1,num2,num3: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	//1st cond    T part                                                                                F part
	num1>num2 ? (num1>num3) ? printf("num1=%d is greater",num1) : printf("num3=%d id greater",num3): (num2>num3) ? printf("Num2=%d is greater",num2) : printf("Num3=%d is grater",num3);
	//            cond            T                                 F                                 cond           T                                      F
	return 0;
}
