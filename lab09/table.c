#include<stdio.h>
int main()
{
	int n,i=1,a;
	printf("Enter the digit ");
	scanf("%d",&n);
	while(i<=10)
	{
		a=n*i;
		printf("%d * %d = %d\n",n,i,a);
		i=i+1;
	}
	return 0;
}
