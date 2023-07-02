#include<stdio.h>
int main()
{
	char c='a',a='A';
	while(c>='a' && c<='z')
	{
		printf("%c ",c);
		c++;
	}
	printf("\n");
	while(a>='A' && a<='Z')
	{
		printf("%c ",a);
		a++;
	}
	return 0;
}
