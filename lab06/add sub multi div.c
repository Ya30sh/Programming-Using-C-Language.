#include<stdio.h>
int main()
{
	int a,m,n;
	char c;
	printf("Enter the operator ");
	scanf("%c",&c);
	printf("enter the no. ");
	scanf("%d",&n);
	printf("enter the no. ");
	scanf("%d",&m);
	if(c='+')
	{
			a=n+m;
	}
	else if('-')
	{
			a=n-m;
	}
	else if('*')
	{
			a=n*m;
	}
	else if('/')
	{
			a=n/m;
	}
	else
	{
			printf("please enter valid operator among from +,-,*,/");
	}
			printf("%d",a);
	return 0;
}
