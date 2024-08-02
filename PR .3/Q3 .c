#include<stdio.h>
#include<conio.h>

void main()

{
	 int i,n;
	 
	 printf("Enter a number :");
	 scanf("%d",&n);
 	
 	 int ld=n%10;
 	 printf("last digit : %d\n",ld);
 	 
 	 while(n>9)
 	{
 		n=n/10;
 	 	
	}
 	printf("first digit : %d\n\n",n);
 	printf("sum : %d",ld+n);

	 
	 
	 
	
	
	
	
}