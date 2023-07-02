#include<stdio.h>
int main()
{
	int a[100],min,max=0,avg,sum=0,i,n;
	printf("Enter the length of element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(max<a[i])
		{
			max=a[i];
		}
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	avg=sum/n;
	printf("avg is %d\n",avg);
	printf("sum is %d\n",sum);
	printf("min is %d\n",min);
	printf("max is %d\n",max);
	return 0;
}
