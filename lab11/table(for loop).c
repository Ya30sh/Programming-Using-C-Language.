#include<stdio.h>
int main()
{
	int n,m,a;
	printf("Enter the value ");
	scanf("%d",&n);
	for(m=1;m<=10;m++)
	{
		a=n*m;
		printf("%d * %d = %d\n",n,m,a);
	}
	return 0;
}
