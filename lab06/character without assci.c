#include<stdio.h>
int main()
{
	char ch,A,Z,a,z;
	printf("enter the character ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("this is a upper case");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("this is a lower case");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("this is a digit");
	}
	else
	{
		printf("this is special character");
	}
	return 0;
}
