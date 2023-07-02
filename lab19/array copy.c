#include<stdio.h>
int array(int a[5]);
int main()
{
	int a[5],i,n;
	for(i=0;i<5;i++)
	{
		printf("Enter the value ");
		scanf("%d",&a[i]);
	}
	array(a);
}

int array(int a[100])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
