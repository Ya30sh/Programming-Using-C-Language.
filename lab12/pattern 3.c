#include<stdio.h>
int main()
{
	int r,c;
	for(r=5;r>0;r--)
	{
		for(c=5;c>=r;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	return 0;
}
