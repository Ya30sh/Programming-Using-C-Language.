#include<stdio.h>
int comp(int a,int b);
int main()
{
	int a,b,c;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	c=comp(a,b);
	printf("%d is greater",c);
}

int comp(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
