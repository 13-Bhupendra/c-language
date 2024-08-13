#include<stdio.h>
#include<conio.h>

void main()
{
	 
	
	int i,n;
	
	for(i=5; i>=1; i--)
	{
		for(n=1; n<=i; n++)
		{
			printf("%d ",n);	
		}
		printf("\n");
	}
}