#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("this is a upper case");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("this is a lower case");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("this is a digit");
	}
	else
	{
		printf("this is special character");
	}
	return 0;
}
