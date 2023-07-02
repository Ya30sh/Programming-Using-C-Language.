#include<stdio.h>
int main()
{
	int a=1,x,y,i=1;
	printf("for x^y");
	printf("Enter the value of x ");
	scanf("%d",&x);
	printf("Enter the value of y ");
	scanf("%d",&y);
	while(i<=y)
	{
		a=a*x;
		i++;
	}
	printf("%d",a);
	return 0;
}
