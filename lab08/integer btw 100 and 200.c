#include<stdio.h>
int main()
{
	int n=100;
	while(n<=200)
	{
		if(n%5!=0 && n%7==0)
			{
					printf("%d\n",n);
			}
			n++;
	}
	return 0;
}
