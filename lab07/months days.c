#include<stdio.h>
int main()
{
	int n;
	printf("enter the no.");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("31");
			break;
		case 2:
			printf("28");
			break;
		case 3:
			printf("31");
			break;
		case 4:
			printf("30");
			break;
		case 5:
			printf("31");
			break;
		case 6:
			printf("30");
			break;
		case 7:
			printf("31");
			break;
		case 8:
			printf("31");
			break;
		case 9:
			printf("30");
			break;
		case 10:
			printf("31");
			break;
		case 11:
			printf("30");
			break;
		case 12:
			printf("31");
			break;				
		default:
			printf("Enter the valid number from 1-12");
	}
	return 0;
}
