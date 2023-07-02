#include<stdio.h>
int main()
{
	int n,m,j;
	printf("Enter the 1st value ");
	scanf("%d",&n);
	printf("Enter the 2nd value ");
	scanf("%d",&m);
	n++;
	while(n<m)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n	++;
	}
	return 0;
}
