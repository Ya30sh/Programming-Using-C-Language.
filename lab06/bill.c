#include<stdio.h>
int main()
{
	float u,a,t;
	printf("enter the unit ");
	scanf("%f",&u);
	if(u>250)
	{
		u=u-250;
		a=220+(u*1.50);
	}
	else if(u>150)
	{
		u=u-150;
		a=100+(u*1.20);
	}
	else if(u>50)
	{
		u=u-50;
		a=25+(u*0.75);
	}
	else if(u<=50)
	{
		a=(u*0.50);
	}
		t=(1.2)*a;
		printf("the total bill is %f",t);
	return 0;
}
