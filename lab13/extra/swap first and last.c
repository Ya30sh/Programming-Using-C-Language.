#include<stdio.h>
int  main()
{
	int n,m=1,a,b,s,f,k;
	printf("Enter the  value ");
	scanf("%d",&n);
	f=n%10;
	k=n;
	while(n>0)
	{		   //123
		a=n%10;//3
		n=n/10;//12
		b=a*m;//30
		m=m*10;//100
	}
	
	s=b+f;
	n=(k-s)/10;
	printf("%d%d%d",f,n,a);
	return 0;
}
