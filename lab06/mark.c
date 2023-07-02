#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,p;
	printf("enter the marks of subject 1 ");
	scanf("%d",&n1);
	printf("enter the marks of subject 2 ");
	scanf("%d",&n2);
	printf("enter the marks of subject 3 ");
	scanf("%d",&n3);
	printf("enter the marks of subject 4 ");
	scanf("%d",&n4);
	printf("enter the marks of subject 5 ");
	scanf("%d",&n5);
	p=(n1+n2+n3+n4+n5)/5;
	if(p>=70)
	{
		printf("percentage is %d and Distinction",p);
	}
	else if(p<70 && p>=60)
	{
		printf("percentage is %d and first class",p);
	}
	else if(p<60 && p>=50)
	{
		printf("percentage is %d and second class",p);
	}
	else if(p<50 && p>=40)
	{
		printf("percentage is %d and third class",p);
	}
	else if(p<40 && p>=30)
	{
		printf("percentage is %d and pass class",p);
	}
	else if(p<30)
	{
		printf("percentage is %d and fail",p);
	}
	return 0;
}
