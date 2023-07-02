#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("Enter the value for element: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
