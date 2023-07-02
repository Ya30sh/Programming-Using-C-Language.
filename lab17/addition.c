#include<stdio.h>
int main()
{
	int *p,*q,a,b;
	printf("Enter the value: ");
	scanf("%d",&a);
	printf("Enter the value: ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("Addition of the entered value is %d",*p+*q);
	return 0;
}
