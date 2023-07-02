#include<stdio.h>
add(a,b);
int main()
{
	int a,b,c;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	add(a,b);
}


add(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
