#include<stdio.h>
int main()
{
	int n,i,j=0;
	printf("Enter the value ");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		n=n/10;
		j=(j*10)+i;
		
	}
		printf("%d",j);
	return 0;
}
