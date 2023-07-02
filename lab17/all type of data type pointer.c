#include<stdio.h>
int main()
{
	int a,*p,*q,*r,*s;
	char b;
	float c;
	double d;
	printf("Enter the character value: ");
	scanf("%c",&b);
	printf("Enter the float value: ");
	scanf("%f",&c);
	printf("Enter the double value: ");
	scanf("%lf",&d);
	printf("Enter the integer value: ");
	scanf("%d",&a);
	p=&b;
	q=&c;
	r=&d;
	s=&a;
	printf("Adress of character value is %d and valued entered is %c\n",p,*p);
	printf("Adress of float value is %d and valued entered is %f\n",q,*q);
	printf("Adress of double value is %d and valued entered is %lf\n",r,*r);
	printf("Adress of integer value is %d and valued entered is %d\n",s,*s);
	return 0;
}
