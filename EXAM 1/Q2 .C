#include<stdio.h>
#include<conio.h>
  main ()
{
	// Q.2
	
	int a, b ,c ,d;
	
	printf("Enter the value of a , b , c and d : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b)
	{
			if(a>c)
			{
					if(a>d)
					{
						printf(" a is maximum ");
					}
					else
					{
						printf(" d is maximum ");
					}
					
			}
			else
			{
				printf(" c is maximum ");
			}
	}
	else
	{
			printf(" b is maximum ");
	}
	
	
	
	
}
