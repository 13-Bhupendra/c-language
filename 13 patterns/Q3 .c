#include<stdio.h>
#include<conio.h>

 main()
{
	int x , y;
	
	for(x=1; x<=5; x++)
	{
		for(y=1; y<=x; y++)
		{
			printf("%d ",x);
		}
		printf("\n");
	}
	
	
}