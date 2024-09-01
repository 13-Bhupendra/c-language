#include<stdio.h>
#include<conio.h>

void main()
{
	int n ,i ,j;
	
	printf("Enter the size of rows and columns :");
	scanf("%d",&n);
	
	printf("\n");
	
	int a[n][n];
	int max;
	
	printf("Enter a array numbers >");
	printf("\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[j][i]);
		 
		}
		printf("\n");
	}
	
	
}
