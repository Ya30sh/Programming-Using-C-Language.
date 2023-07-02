#include<stdio.h>
int main()
{
	char c;
	int n;
	printf("Lower case: ");
	n=97;
	while (n<=122)
	{
		c=n;
		printf("%c ",c);
		n++;
	}
	printf("\n");
	printf("upper case: ");
	n=65;
	while(n<=90)
	{
		c=n;
		printf("%c ",c);
		n++;
	}
}
