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
		if(a[i]%3==0)
		{
			n++;
		}
	}
	printf("There are %d numbers which are divisible by 3",n);
	return 0;
}
