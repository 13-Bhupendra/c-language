#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	
	for(a=5; a>=1; a--)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b );
		}
			for(c=a; c<=5; c++)
		{
			printf("- ");
		}
		printf("\n");
	}
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b);
		}
		for(c=a; c<=5; c++)
		{
			printf("- ");
		}
		printf("\n");
	}
	
}


