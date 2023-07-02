#include<stdio.h>
int main()
{
	int a[100],*b[100],n,i;
	printf("How much elements you wants to enter? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*b[i]);
	}
	return 0;
}
