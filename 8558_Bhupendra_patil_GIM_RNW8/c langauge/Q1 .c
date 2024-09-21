#include<stdio.h>
#include<conio.h>

void user()
{
	int n ;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("The number you input is even. ");
	}
	else 
	{
		printf("The number you input is odd .");
	}
}



void main ()
{
	user();
	
	
}