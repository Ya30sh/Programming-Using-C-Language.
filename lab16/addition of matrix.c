#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],j,i;
	printf("Enter the value for matrix A(enter row wise):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the value for matrix B(enter row wise):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Matrix C is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
