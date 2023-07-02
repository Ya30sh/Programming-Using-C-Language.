#include<stdio.h>
int simint(int p,int r,int t);
int main()
{
	int p,r,t,s;
	printf("Enter the PRINCIPLE value: ");
	scanf("%d",&p);
	printf("Enter the RATE OF INTEREST : ");
	scanf("%d",&r);
	printf("Enter the TIME PERIOD : ");
	scanf("%d",&t);
	s=simint(p,r,t);
	printf("%d",s);
}

int simint(int p,int r,int t)
{
	int s;
	s=(p*r*t)/100;
	return s;
}
