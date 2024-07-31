 #include<stdio.h>
#include<conio.h>

void main ()

{
	int x;
	printf("Enter the value of x  : ");
	scanf("%d",&x);
	
	if(x==0)
	{
		printf("This number is neutral !");
	}
	
	else if (x<0)
	{
		printf("This number is negative !");
	}
	
 	else
 	{
 		printf("This number is positive !");
	}
	
	
}