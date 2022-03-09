#include<stdio.h>
struct employee
{
	char name[15];
	int age;
	long long int phoneno;
	int salary;
};
int main()
{
	struct employee e[20];
	int i;
	for(i=0;i<20;i++)
	{
		printf("\nenter name:");
		scanf("%s",&e[i].name);
		printf("\nenter age:");
		scanf("%d",&e[i].age);
		printf("\nenter phonenumber:");
		scanf("%lld",&e[i].phoneno);
		printf("\nenter salary:");
		scanf("%d",&e[i].salary);
	}
	printf("\nName      Age    Phonenumber   Salary ");
	for(i=0;i<20;i++)
	{
	     printf("\n%15s      %2d    %5lld    %4d\n",e[i].name,e[i].age,e[i].phoneno,e[i].salary);
	}
	return 0;
}
