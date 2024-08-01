#include<stdio.h>
#include<conio.h>
void main ()
{
	//Q.3
	
 	int i=1,n;
 	
	printf("Enter the value of n : ");
	scanf("%d",&n);
 	
 	do
 	{
 		if(i%2==0)
 		{
		  	printf(" %d",i)	;
		}
 		
 		i++;
 		
	}while(i<=n);
	
}