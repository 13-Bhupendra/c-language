#include<stdio.h>
#include<conio.h>

void main()
{
	// Q .4 -> 
	
 	int a, b ,c;
	
	printf("Enter a :");
	scanf("%d",&a);
	
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("Enter c :");
	scanf("%d",&c);
	
	if(a>b)
	{
	  	if(b>c)
	  	{
	  			printf("c is minimum .");	
		}
		else
		{
				printf("b is minimum .");
		}
	}
	else
	{
		printf("a is minimum .");
	}
	
	
	
	
	
}