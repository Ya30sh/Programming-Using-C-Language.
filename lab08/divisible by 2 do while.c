#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the value ");
	scanf("%d",&n);
	printf("Enter the value ");
	scanf("%d",&m);
	n++;
	do
	{
		if(n%2==0)
		{
		printf("%d\n",n);
		}
		n++;
	}while(n<m);
	return 0;
}
