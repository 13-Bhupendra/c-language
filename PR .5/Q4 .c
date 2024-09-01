#include<stdio.h>
#include<conio.h>

void main ()

{
	int  n ,i, j ;
	
	printf("Enter the number of rows and columns : ");
	scanf("%d",&n);
	
	printf("\n");
	
	int a[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		 
		}
		printf("\n");
	}	
	
	
	int sumrow , sumcol;
	
 
	
	for(i=0; i<n; i++)
	{
		sumrow = sumcol =0 ;
		
		for(j=0; j<n; j++)
		{
			
			sumrow = sumrow + a[i][j];
			sumcol = sumcol + a[j][i];
			 
		}
		printf("\nsum of row : %d        sum of column : %d ",sumrow,sumcol);
		printf("\n");
		
	}
	
	;
}
