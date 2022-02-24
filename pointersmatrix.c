#include<stdio.h>
int main()
{
	int i,j;
	int *ptr[3][3];
	printf("Read the values of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(ptr+i)+j)); 
		}
	}
	
	printf("To print the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
		 
			printf(" %d",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	
}
