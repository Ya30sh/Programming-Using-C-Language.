#include<stdio.h>
int main()
{
	int a[100],b[100],i,n=1,f=0;
	for(i=0;i<5;i++)
	{
		printf("height of student %d ",n);
		scanf("%d",&a[i]);
		printf("\n");
		printf("weight of student %d ",n);
		scanf("%d",&b[i]);
		printf("\n");
		n++;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>170 && b[i]<50)
		{
			f++;
		}
	}
	printf("there are %d student whose height is more then 170 and weight is less then 50",f);
	return 0;
}
