#include<stdio.h>
struct e
{
	char name[30];
	int id;
	float salary;
};
int main()
{
	struct e e1;
	printf("Enter the Employee name: ");
	scanf("%s",e1.name);
	printf("Enter the Employee id: ");
	scanf("%d",&e1.id);
	printf("Enter the Employee salary: ");
	scanf("%f",&e1.salary);
	printf("%s is Employee, whose id is %d and his salary is %f",e1.name,e1.id,e1.salary);
	return 0;
}
