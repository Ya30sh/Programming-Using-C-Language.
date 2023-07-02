#include<stdio.h>
int main()
{
	int i,n,a[100],o=0,e=0;
	printf("Enter the value for element: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("odd numbers are %d\n",o);
	printf("even numbers are %d",e);
	return 0;
}
