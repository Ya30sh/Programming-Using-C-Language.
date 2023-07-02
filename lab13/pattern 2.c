#include<stdio.h>
int main()
{
	int r,c,a;
	for(r=1;r<=5;r++)
	{
			a=1;
		for(c=5;c>=r;c--)
		{
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
