#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],n;
	int i,flag=0;
	printf("Enter the character ");
	gets(a);
	puts(a);
	printf("enter the charcter to find ");
	scanf("%c",&n);
	for(i=0;a[i]!='\0';i++)
	{
		if(n==a[i])
		{
			flag=1;
			break;	
		}
	}
	if(flag==1){
		printf("Character is found at: %d",i);
	}
	else{
		printf("not found");
	}
	return 0;
}
