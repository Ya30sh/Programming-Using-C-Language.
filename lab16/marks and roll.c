#include<stdio.h>
int main()
{
	int a[30][20],j,i;
	for(i=0;i<20;i++)
	{
		printf("Enter the roll no. and marks: \n");
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Roll No.        Marks\n");
	for(i=0;i<20;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d\t\t%d\n",a[i][0],a[i][1]);
		}
	}
	return 0;
}
