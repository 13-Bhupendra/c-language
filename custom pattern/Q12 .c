#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	
	for(a=5; a>=1; a--)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b );
		}
			for(c=a; c<=4; c++)
		{
			printf("    ");
		}
		for(d=a; d>=1; d--)
		{
			printf("%d ",d);
		}
		printf("\n");
	}
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b);
		}
		for(c=a; c<=4; c++)
		{
			printf("    ");
		}
		for(d=a; d>=1; d--)
		{
			printf("%d ",d);
		}
		printf("\n");
	}
	
}


