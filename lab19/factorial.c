#include<stdio.h>
int fact(int n);
int main()
{
	int n,f;
	printf("Enter the value for factorial: ");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);	
}


int fact(int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
