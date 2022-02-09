#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m<=100 && m>=85)
	{
		printf("Grade A");
	}
	else if(m<=84 && m>=70)
	{
		printf("Grade B");
	}
	else if(m<=69 && m>=55)
	{
		printf("Grade C");
	}
	else if(m<=54 && m>=40)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
}
