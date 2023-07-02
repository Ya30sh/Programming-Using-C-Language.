#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the first side ");
	scanf("%d",&a);
	printf("enter the second side ");
	scanf("%d",&b);
	printf("enter the third side ");
	scanf("%d",&c);
	if(c==sqrt((a*a)+(b*b)) || a==sqrt((b*b)+(c*c)) || b==sqrt((a*a)+(c*c)))
	{
		printf("triangle is right angle trianle");
	}
	else if(a==b && a==c)
	{
		printf("triangle is equilateral triangle");
	}
	else if(a==b || a==c || b==c)
	{
		printf("triangle is isosceles triangle");
	}
	else
	{
		printf("triangle is scalene triangle");
	}
	return 0;
}
