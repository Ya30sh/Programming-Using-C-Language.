#include<stdio.h>
int main()
{
	int a[5],n=1,i,s;
	printf("Enter any 5 value \n");
	for(i=0;i<5;i++)
	{
		printf("value %d: ",n);
		scanf("%d",&a[i]);
		n++;
	}
	n=0;
	printf("value to search is: ");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(s==a[i])
		{
			printf("Element found at %d",i+1);
			n++;
		}
	}
	if(n==0)
	{
		printf("Please enter the valid value.");
	}
	return 0;
}
