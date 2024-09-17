#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,peri,s,area;

	printf("Enter values for a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);

	peri=a+b+c;

	printf("perimeter of rectangle=%f",peri);

	area = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("area=%f",area);

	return 0;
}
