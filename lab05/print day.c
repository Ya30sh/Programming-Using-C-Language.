#include<stdio.h>
int main()
{
	int n;
	printf("enter the value ");
	scanf("%d",&n);
	if(n==1)
	{
	printf("sunday");
}
	else if(n==2)
{		
	printf("monday");
    }
    	else if(n==3)
{		
	printf("tuesday");
    }
    	else if(n==4)
{		
	printf("wednesday");
    }
    	else if(n==5)
{		
	printf("thursday");
    }
    	else if(n==6)
{		
	printf("friday");
    }
    	else if(n==7)
{		
	printf("saturday");
    }
    else if(n>7)
    {
    	printf("please enter the valid no.");
	}
	return 0;
}
