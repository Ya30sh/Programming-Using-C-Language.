#include<stdio.h>
int main()
{
	int p,r,t,s;
	printf("Enter the PRINCIPLE value: ");
	scanf("%d",&p);
	printf("Enter the RATE OF INTEREST: ");
	scanf("%d",&r);
	printf("Enter the TIME PERIOD: ");
	scanf("%d",&t);
	si(p,r,t);
}

si(int p,int r,int t)
{
	int s;
	s=(p*r*t)/100;
	printf("%d",s);
}
