#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],i,n;
	gets(a);
	gets(b);
	printf("length of a is %d and length of b is %d ",strlen(a),strlen(b));
	if(strcmp(a,b)==0)
	{
		printf("\nBoth String Are Same");
	}	
	else
	{
		printf("\nNot Same ");
	}
	printf("%s",strrchr(a,'s'));
}
