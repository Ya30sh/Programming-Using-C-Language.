#include<stdio.h>
int main()
{
	int a[5],n=1,i;
	printf("Enter any 5 value \n");
	for(i=0;i<5;i++)
	{
		printf("value %d: ",n);
		scanf("%d",&a[i]);
		n++;
	}
	n=0;
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			n++;	
		}
	}
	printf("There are %d negative Elements.",n);
	return 0;
}
