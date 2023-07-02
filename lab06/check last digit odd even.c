#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the value ");
	scanf("%d",&n);
	a=n%10;
	if(a%2==0)
	{
		printf("the last digit is %d and it is even",a);
	}
	else
	{
		printf("the last digit is %d and it is odd",a);
	}
	return 0;
}
