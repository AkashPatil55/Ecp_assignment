#include<stdio.h>

int main()
{
/*
	int no,a,b,c,d;

	printf("Enter 4 digit number:");
	scanf("%d",&no);
	
	a=no%10000;
	a=a/1000;
	b=no%1000;
	b=b/100;
	c=no%100;
	c=c/10;
	d=no%10;
	printf("face values=%d %d %d %d \n",a,b,c,d);

*/

/*
	int no,a,b,c,d;

	printf("Enter 4 digit number:");
	scanf("%d",&no);
	
	a=no%10000;
	a=a/1000*1000;
	b=no%1000;
	b=b/100*100;
	c=no%100;
	c=c/10*10;
	d=no%10*9;
	printf("face values=%d %d %d %d \n",a,b,c,d);

*/

	int no,a,b,c,d;

	printf("Enter 4 digit number:");
	scanf("%d",&no);
	
	a=no%10;
	
	b=(no%100)/10;
	
	c=(no%1000)/100;
	
	d=(no%10000)/1000;
	printf("face values=%d %d %d %d \n",a,b,c,d);


return 0;
}
