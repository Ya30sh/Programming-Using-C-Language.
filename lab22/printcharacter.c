#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	char *a;
	int n,i;
	printf("Enter the size of elements: ");
	scanf("%d",&n);
	a=(char *)malloc(n*sizeof(char));
	for(i=0;i<n;i++)
	{
		printf("Enter the data: ");
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %c",a[i]);
	}
	free(a);
	return 0;
}
