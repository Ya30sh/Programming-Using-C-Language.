#include<stdio.h>
int main()
{
	int n,c=1,sum=0,e=0,o=0;
	while(c<=10)
	{
		printf("Enter the value ");
		scanf("%d",&n);
		c++;
		if(n%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("there are %d even no.\n",e);
	printf("there are %d odd no. ",o);
	return 0;
}
