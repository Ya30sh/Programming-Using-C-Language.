#include<stdio.h>
comp(int a,int b);
int main()
{
	int a,b;
	printf("Enter the value A: ");
	scanf("%d",&a);
	printf("Enter the value B: ");
	scanf("%d",&b);
	comp(a,b);
}

comp(int a,int b)
{
	if(a>b)
	{
		printf("%d is greater",a);
	}
	else
	{
		printf("%d is greater",b);
	}
}
