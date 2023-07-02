#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter the value ");
	scanf("%d",&a);
	printf("Enter the value ");
	scanf("%d",&b);
	printf("Enter the value ");
	scanf("%d",&c);
	a>b?(m=a*c):(m=b*c);
	printf("%d",m);
	return 0;
}
