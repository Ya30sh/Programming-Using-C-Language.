#include<stdio.h>
int main()
{
	int n=1,a,sum=0;
	while(n<=10)
	{
		a=n*n;
		sum=sum+a;
		printf("%d\n",a);
		n++;
	}
	printf("The sum of this series is %d",sum);
	return 0;
}
