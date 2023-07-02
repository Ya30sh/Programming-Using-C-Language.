#include<stdio.h>
int main()
{
	int n[32],i=0,b,c=0,m=1,s;
	printf("Enter the value ");
	scanf("%d",&n[0]);
	while(n[0]>=1)
	{
		b=n[0]%2;
		n[0]=n[0]/2;
		s=b*m;
		c=c+s;
		m=m*10;
	}
	printf("%d",c);
}
