#include<stdio.h>
int main()
{
	int x,y,a=1,c;
	printf("for x^y\n");
	printf("Enter the value ");
	scanf("%d",&x);
	printf("Enter the value ");
	scanf("%d",&y);
	for(c=1;c<=y;c++)
	{
		a=a*x;
	}
	printf("%d",a);
	return 0;
}
