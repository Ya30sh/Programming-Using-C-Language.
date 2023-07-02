#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*a,sum=0;
	printf("Enter the size of elements: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum is: %d",sum);
	free(a);
	return 0;
}
