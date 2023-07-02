#include<stdio.h>
int main()
{
	int n,c,f=1;
	printf("Enter the value ");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		f=f*c;
	}
	printf("%d",f);
	return 0;
}
