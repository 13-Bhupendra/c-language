#include<stdio.h>
#include<conio.h>

void main()

{
	int i ,j ,k , l;
	
	for(i=1; i<=5; i++)
	{
	
		
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		
			for(l=i; l<=4; l++)
		{
			printf("    ");
		}
			
		for(k=i; k>=1; k--)
		{
			printf("%d ",k);
		}
		
		printf("\n");
		
	}
}
