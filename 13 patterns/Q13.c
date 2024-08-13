#include<stdio.h>
#include<conio.h>

 main()
{
	 char x , y ,z='A';
	
	for(x='A'; x<='E'; x++)
	{
		for(y='A'; y<=x; y++)
		{
			printf("%c ",z);
			z++;
		}
		printf("\n");
	}
	
	
}