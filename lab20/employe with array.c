#include<stdio.h>
struct employee
{
	char name[30];
	int id;
	int salary;
};
int main()
{
	struct employee a[100];
	int i,n=1;
	for(i=0;i<5;i++)
	{
		printf("Enter the Employee%d name: ",n);
		scanf("%s",a[i].name);
		printf("Enter the Employee%d id: ",n);
		scanf("%d",&a[i].id);
		printf("ENter the Employee%d salary: ",n);
		scanf("%d",&a[i].salary);
		n++;
	}
	n=1;
	for(i=0;i<5;i++)
	{
		printf("Employee%d is %s, whose id is %d and his salary is %d\n",n,a[i].name,a[i].id,a[i].salary);
		n++;
	}
}
