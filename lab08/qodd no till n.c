#include<stdio.h>
int main()
{
	int n=1,m;
	printf("Enter the value ");
	scanf("%d",&m);
	while(n<=m)
	{
		if(n%2!=0)
		{
			printf("%d\n",n);
		}
		n++;
	}
	return 0;
}
