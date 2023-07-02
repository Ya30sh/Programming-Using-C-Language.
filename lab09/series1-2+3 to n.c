#include<stdio.h>
int main()
{
	int m=2,n;
	printf("Enter the value ");
	scanf("%d",&n);
	printf("1");
	while(m<=n)
	{
		if(m%2==0)
		{
		printf("-%d",m);
		}
		else
		{
		printf("+%d",m);
		}
		m++;
	}
	return 0;
}
