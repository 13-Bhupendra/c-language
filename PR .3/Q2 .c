#include<stdio.h>
#include<conio.h>

void main()

{
	int i=1,n;
	 
	printf("Enter a number :");
	scanf("%d",&n);
 	
 
	
 	 
 	 while(n>9)
 	{
 	 	n=n/10;
 		i++;
	}
 		printf("sum of numbers : %d",i);
}