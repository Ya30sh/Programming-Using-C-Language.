#include<stdio.h>
#include<string.h>
int main()
{
		char a[100],b[100],m,n;
		int i;
		printf("Enter the string 1: ");
		gets(a);
		printf("Enter the string 2: ");
		gets(b);
		printf("ENter the character wants to replace in string 1: ");
		scanf("%c",&n);
		printf("Enter the character wants to be replace with %c: ",n);
		scanf(" %c",&m);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==n)
			{
				a[i]=m;
			}
		}
		puts(a);
}
