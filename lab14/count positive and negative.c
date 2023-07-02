#include<stdio.h>
int main()
{
	int i,n,a[100],p=0,ne=0;
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
		if(a[i]>0)
		{
			p++;
		}
		else
		{
			ne++;
		}
	}
	printf("positive numbers are %d\n",p);
	printf("negative numbers are %d",ne);
	return 0;
}
