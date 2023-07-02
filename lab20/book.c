#include<stdio.h>
#include<string.h>
struct boo
{
	char name[10];
	char author[10];
	char publication[10];
	float price;
}book[2];
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("Enter the Book name %d: ",i+1);
		scanf("%s",book[i].name);
		printf("Enter the Book auther %d: ",i+1);
		scanf("%s",book[i].author);
		printf("Enter the Book publication %d: ",i+1);
		scanf("%s",book[i].publication);
		printf("Enter the Book price %d: ",i);
		scanf("%f",&book[i].price);	
	}

	for(i=0;i<3;i++)
	{
		printf("Book%d is %s, whose is author is %s, which is publish by %s, @of Rs%f ",i+1,book[i].name,book[i].author,book[i].publication,book[i].price);
	}
}
