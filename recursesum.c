#include<stdio.h>
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
int main()
{
	int n,s;
	printf("enter a no.");
	scanf("%d",&n);
	s=sum(n);
	printf("sum=%d",s);
	return 0;
}
