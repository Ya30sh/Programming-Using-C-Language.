#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=3;c>=r;c--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(r=3;r>=1;r--)
	{
		for(c=3;c>=r;c--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

