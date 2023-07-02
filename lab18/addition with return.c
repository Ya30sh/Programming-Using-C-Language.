#include<stdio.h>
int add(int a,int b);
int main()
{
	int a,b,c;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	c=add(a,b);
	printf("%d",c);
}


int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
