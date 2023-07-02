#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("A=%d   B=%d",*q,*p);
	return 0;
}
