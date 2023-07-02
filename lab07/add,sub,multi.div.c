#include<stdio.h>
#include "print.h"
int main()
{
	int a,m,n;
	char c;
	printf("Enter the operator ");
	scanf("%c",&c);
	n=print();
	printf("enter the no. ");
	scanf("%d",&m);
	switch (c)
	{
		case '+':
			a=n+m;
			printf("%d",a);
			break;
		case '-':
			a=n-m;
			printf("%d",a);
			break;
		case '*':
			a=n*m;
			printf("%d",a);
			break;
		case '/':
			a=n/m;
			printf("%d",a);
			break;
		default:
			printf("please enter valid operator among from +,-,*,/");
	}
	return 0;
}
