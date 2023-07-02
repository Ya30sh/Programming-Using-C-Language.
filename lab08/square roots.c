#include<stdio.h>
#include<math.h>
int main()
{
	double n=0,s;
	while(n<=9)
	{
		s=sqrt(n);
		printf("%lf",n);
		printf("%lf\n",s);
		n++;
	}
	return 0;
}
