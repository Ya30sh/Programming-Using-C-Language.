#include<stdio.h>
int main()
{
	char a;
	printf("ASCII value of a to z\n");
	for(a='a';a>='a' || a=='z';a++)
	{
		printf("%c : ",a);
		printf("%d \n",a);
		if(a=='z')
		{
			break;
		}
	}
	printf("ASCII value of A to Z\n");
	for(a='A';a>='A'|| a<='Z';a++)
	{
		printf("%c : ",a);
		printf("%d \n",a);
		if(a=='Z')
		{
			break;
		}
	}
	return 0;
}
