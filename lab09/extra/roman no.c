#include<stdio.h>
int main()
{
	int n;
	char I,V,X,L,C,D,M;
	printf("Enter the value ");
	scanf("%d",&n);
	if(n>=1000)
	{
		while(n>=1000)
		{
			printf("M");
			n=n-1000;
		}
	}
	if(n>=900 && n<1000)
	{
		printf("CM");
		n=n-900;
	}
	if(n>=500 && n<900) 
	{
		printf("D");
		n=n-500;
	}
	if(n>=100 && n<500)
	{
		while(n>=100)
		{
		printf("C");
		n=n-100;
		}
	}
	if(n>=90 && n<100)
	{
		printf("XC");
		n=n-90;
	}
	if(n>=50 && n<90)
	{
		printf("L");
		n=n-50;
	}
	if(n>=40 && n<50)
	{
		printf("XL");
		n=n-40;
	}
	if(n>=10 && n<40)
	{
		while(n>=10)
		{
			printf("X");
			n=n-10;
		}
	}
	if(n==9)
	{
		printf("IX");
	}
	if(n==5 && n<9)
	{
		printf("v");
	}
	if(n>=5 && n<9)
	{
		printf("V");
		n=n-5;
		while(n>0)
		{
			printf("I");
			n--;
		}
	}
	if(n==4)
	{
		printf("IV");
	}
	if(n>=1 && n<4)
	{
		while(n>0)
		{
			printf("I");
			n--;
		}
	}
	return 0;
}
