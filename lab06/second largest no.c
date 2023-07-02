#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	printf("enter the value of c ");
	scanf("%d",&c);
	if (a>b && a>c)
	{
		if (b>c)
		printf("b is second largest no.");
		else
		printf("c is second largest no.");
	}
	else if (b>a && b>c)
	{
		if (a>c)
		printf("a is second largest no.");
		else 
		printf("c is second largest no.");
	}
	else if (c>a && c>b)
	{
		if (a>b)
		printf("a is second largest no.");
		else
		printf("b is second largest no.");
	}
	return 0;
}
