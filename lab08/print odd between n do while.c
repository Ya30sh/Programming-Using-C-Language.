#include<stdio.h>
int main()
{
	int n=1,m;
	printf("Enter the value ");
	scanf("%d",&m);
	do
	{
		if(n%2!=0)
		{
		printf("%d\n",n);
		}
		n++;
	}while(n<=m);
	return 0;
}
