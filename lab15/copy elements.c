#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5],i;
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	printf("a[i]: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nb[i]: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
