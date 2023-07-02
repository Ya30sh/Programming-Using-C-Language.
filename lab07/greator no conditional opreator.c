#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value ");
	scanf("%d",&a);
	printf("Enter the value ");
	scanf("%d",&b);
	printf("Enter the value ");
	scanf("%d",&c);
	a>b?a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c);
	return 0;
}
