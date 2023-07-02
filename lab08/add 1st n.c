#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("Enter the value ");
	scanf("%d",&n);
	while(m<=n)
	{
		sum=sum+m;
		m++;
	}
	printf("%d",sum);
	return 0;
}
