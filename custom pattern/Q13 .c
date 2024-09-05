#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	for(a=2; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	for(a=4; a>=1; a--)
	{

		for(b=1; b<=a; b++)
		{
			printf("%d ",b );
		}
		printf("\n");
	}
	
	
}


