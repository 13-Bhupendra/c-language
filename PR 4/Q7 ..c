#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			 
			if(i==1 || i==3)
			{
				printf("* ");
			}
			else if(i==2 && j==2 || j==5)
			{
				printf("*       ");
			}
			 
		}
		printf("\n");
	}
}