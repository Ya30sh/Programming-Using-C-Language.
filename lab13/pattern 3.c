#include<stdio.h>
int main()
{
	int r,c,a=4;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=a;c++)
		{
			printf(" ");
		}
		a--;
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
