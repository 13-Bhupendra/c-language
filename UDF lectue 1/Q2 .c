#include<stdio.h>
#include<conio.h>

void divisible()
{
	//Q. (b) -> 
	int n ;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("The given number is divisible by both 3 and 5 .");
	}
	else if(n%3==0)
	{
		printf("The given number is divisible by 3 only ! ");
		
	}
	else if(n%5==0)
	{
		printf("The given number is divisible by 5 only !");
	}
	else
	{
		printf("The given number is not divisible by both 3 and 5 !");
	}
}


void main()
{
	divisible();
	
}