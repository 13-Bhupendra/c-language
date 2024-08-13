#include<stdio.h>
#include<conio.h>

 main()
{
	char x , y;
	
	for(x='A'; x<='E'; x++)
	{
		for(y='A'; y<=x; y++)
		{
			printf("%c ",y);
		}
		printf("\n");
	}
	
	
}