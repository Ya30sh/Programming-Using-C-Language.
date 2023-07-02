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
	if (a<b && a<c)
	{
		if (b<c)
		printf("a<b<c");
		else
		printf("a<c<b");
	}
	else if (b<a && b<c)
	{
		if (a<c)
		printf("b<a<c");
		else 
		printf("b<c<a");
	}
	else if (c<a && c<b)
	{
		if (a<b)
		printf("c<a<b");
		else
		printf("c<b<a");
	}
	return 0;
}
