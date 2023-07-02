#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the value ");
	scanf("%d",&i);
	a=i%10;
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
