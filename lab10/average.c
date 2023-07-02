#include<stdio.h>
int main()
{
	double n,avg,sum=0;
	int counter=-1;
	while(1)
	{
		printf("Enter the no.(enter 0 to stop) ");
		scanf("%lf",&n);
		sum=sum+n;
		counter=counter+1;
		if(n==0.0)
		break;
	}
	avg=sum/counter;
	printf("The average of this %d number is: %lf",counter,avg);
	printf("\nThe addition of this %d number is: %lf",counter,sum);
	return 0;
}
