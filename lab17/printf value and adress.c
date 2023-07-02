#include<stdio.h>
int main()
{
	int *p,a;
	printf("Enter the value: ");
	scanf("%d",&a);
	p=&a;
	printf("The entered valued is %d\n",*p);
	printf("Adressed of entered value is %d",p);
	return 0;
}
