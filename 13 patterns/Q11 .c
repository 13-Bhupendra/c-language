 #include<stdio.h>
#include<conio.h>

 main()
{
	int x , y;
	
	for(x=1; x<=5; x++)
	{
		for(y=x; y<=5; y++)
		{
			if(y%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	
}