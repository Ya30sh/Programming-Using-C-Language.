#include<stdio.h>
int main()
{
	int n,a=1;
	printf("Enter the value ");
	scanf("%d",&n);
	while(a<=n)
	{
		if(n%a==0)
		{
			printf("%d ",a);
		}
		a++;
	}
	return 0;
}
