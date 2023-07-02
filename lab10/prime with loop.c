#include<stdio.h>
int main()
{
	int n,a=1,f=0;
	printf("Enter the value ");
	scanf("%d",&n);
	while(a<=n)
	{
		if(n%a==0)
		{
			f++;
		}
		a++;
	}
	if(f<=2)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is composite");
	}
	return 0;
}
