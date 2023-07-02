#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	if(n==2 || n==3) 
	{
		printf("number is prime ");
	}
	else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
	{
		printf("number is composite ");
	}
	else 
	{
		printf(" number is prime ");
	}
	return 0;
}
