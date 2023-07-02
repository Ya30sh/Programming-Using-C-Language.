#include<stdio.h>
int main()
{
	int r,c,i;
	for(r=1;r<=5;r++)
	{
		for(c=5;c>=r;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
