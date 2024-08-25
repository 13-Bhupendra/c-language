#include<stdio.h>
#include<conio.h>

 main()
{
	int r ,c ,a ,b ;
	
	printf("Enter a rows : ");
	scanf("%d",&r);
	
	printf("Enter a column : ");
	scanf("%d",&c);	

printf("\n");
	
	int x[r][c] ;
	int result ; 
		 
	
	for(a=0; a<r; a++) // row >
	{
		for(b=0; b<c; b++) //column >
		{
			printf("Enter x[%d][%d] :",a,b);
			scanf("%d",&x[a][b]);
		}
	}
	
printf("\n");
 
	for(a=0; a<r; a++) // row >
	{
		for(b=0; b<c; b++) //column >
		{
			printf("%d ",x[a][b]);	
		}
		printf("\n");
	}

printf("\n");
	 
	 
	 for(a=0; a<r; a++)
	{
		for(b=0; b<c; b++)
		{
		 
	 		if(a==b)
	 		{
	 			result = result + x[a][b];
			}
		}
	}
	
		printf("Sum of diagonal of arrray is : %d",result);	
}
