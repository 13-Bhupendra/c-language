#include<stdio.h>
#include<conio.h>

 main()
{
	int r ,c ,a ,b ;
	float  avg ,sum=0;
	
	printf("Enter a rows : ");
	scanf("%d",&r);
	
	printf("Enter a column : ");
	scanf("%d",&c);	

printf("\n");
	
	int x[r][c];
	
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
	
	for(a=0; a<r; a++) // row >
	{
		for(b=0; b<c; b++) //column >
		{
			 sum = sum + x[r][c];
		}
		 
	}
printf("\n");
	
	avg=sum/r*c;
	printf("Average of an array : %.2f",avg);

	
}
