#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter the value ");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		printf("%d\n",a);
		n=n/10;
	}
	return 0;
}
