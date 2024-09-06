#include<stdio.h>
#include<conio.h>

void main()
{
	int n ,sum =0;
	int lenght = 0;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	int i=1;
	 
	while(i<=n)
	{
	 	if(sum%n)
	 	{
	 		 sum = n;
		}
	 	i++;
	}
	
	printf("\nSum if : %d",n);
	
	
}