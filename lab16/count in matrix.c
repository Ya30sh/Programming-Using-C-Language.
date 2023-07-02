#include<stdio.h>
int main()
{
	int a[10][10],j,i,p,n,z;
	printf("Enter the value\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				z++;
			}
			else if(a[i][j]>0)
			{
				p++;
			}
			else
			{
				n++;
			}
		}
	}
	printf("There are %d are positive element, %d are negative element and %d are zero element",p,n,z);
	return 0;
}
