#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	c=a,a=b,b=c;
	printf("a=%d b=%d",a,b);
	return 0;
}
