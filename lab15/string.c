#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("Enter the character: ");
	gets(a);
	printf("%s\n",a);
	printf("Length of string is %d",strlen(a));
	return 0;
}
