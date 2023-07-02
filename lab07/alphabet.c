#include<stdio.h>
int main()
{
	char c,a,z;
	printf("Enter the character ");
	scanf("%c",&c);
	c>=65 && c<=90?printf("It is alphabet "):c>=97 && c<=122?printf("It is alphabet"):printf("enter a valid character");
	return 0;
}
