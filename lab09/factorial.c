#include<stdio.h>
int main()
{
	int s=1,n;
	printf("Enter the value ");
	scanf("%d",&n);
	while(n>0)
	{
		s=s*n;
		n--;
	}
	printf("%d",s);
	return 0;
}
