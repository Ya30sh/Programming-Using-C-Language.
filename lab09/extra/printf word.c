#include<stdio.h>
int main()
{
	int n,s=0,a;
	printf("Enter the value ");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		s=s*10;
		s=s+a;
	}
	while(s>0)
	{
		a=s%10;
		s=s/10;
		if(a==1)
		{
			printf("ONE ");
		}
		else if(a==2)
		{
			printf("TWO ");
		}
		else if(a==3)
		{
			printf("THREE ");
		}
		else if(a==4)
		{
			printf("FOUR ");
		}
		else if(a==5)
		{
			printf("FIVE ");
		}
		else if(a==6)
		{
			printf("SIX ");
		}
		else if(a==7)
		{
			printf("SEVEN ");
		}
		else if(a==8)
		{
			printf("EIGHT ");
		}
		else if(a==9)
		{
			printf("NINE ");
		}
		else if(a==0)
		{
			printf("ZERO ");
		}
	}
	return 0;
}
