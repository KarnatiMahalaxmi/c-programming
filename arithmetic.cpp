/* to perform all arithmetic operations*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the two values to find its sum,difference,product,division");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the sum of two numbers is,%d",c);
	d=a-b;
	printf("the difference of two numbers is ,%d",d);
	e=a*b;
	printf("the product of two numbers is,%d",e);
	f=a/b;
	printf("the division two numbers is,%d",f);
	return 0;
}
