#include<stdio.h>

int main()
{
	float f,c;
	printf("enter for the fahrenheit:");
	scanf("%f",&f);

	float celcious=(f-32)*5/9;

	printf("celcious=%f\n",celcious);
	
	printf("Enter for celcious:");
	scanf("%f",&c);
	float fahrenheit=(c*9/5)+32;

	printf("fahrenheit=%f",fahrenheit);




return 0;
}
