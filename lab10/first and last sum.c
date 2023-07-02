#include<stdio.h>
int main()
{
	int sum=0,f,i,n;
	printf("Enter the value ");
	scanf("%d",&n);
	f=n%10;
	while(n>0)
	{
		i=n%10;
		n=n/10;
	}
		sum=i+f;
	printf("%d",sum);
	return 0;
}
