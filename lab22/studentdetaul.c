#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	char name[10];
	int id;
	int age;	
};
int main()
{
	struct st *s;
	int i,n;
	printf("Enter the size of elemenmt: ");
	scanf("%d",&n);
	s=(struct st *)malloc(n*sizeof(struct st));
	for(i=0;i<n;i++)
	{
		printf("Enter the detail of student%d: \n",i+1);
		printf("Name: ");
		scanf(" %s",(s+i)->name);
		printf("ID: ");
		scanf("%d",&(s+i)->id);
		printf("Age: ");
		scanf("%d",&(s+i)->age);
	}
	for(i=0;i<n;i++)
	{
		printf(" %s is student%d ",(s+i)->name,i+1);
		printf("%d is his ID and ",(s+i)->id);
		printf("his age %d\n",(s+i)->age);
	}
	free(s);
	return 0;
}
