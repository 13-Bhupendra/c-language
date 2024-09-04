#include<stdio.h>
#include<conio.h>

int sum(int x, int y)
{
	return x+y;
}

int sub(int x, int y)
{
	return x-y;
}

int multiply(int x, int y)
{
	return x*y;
}

int divi(int x, int y)
{
	return x/y;
}

int avg(int x, int y)
{
	return x%y;
}


void main ()
{
	int choice , firstno , secondno ;
	
	start:
		
	printf("\n\npress 1 for +  \n");
	printf("press 2 for -  \n");
	printf("press 3 for *  \n");
	printf("press 4 for / \n");
	printf("press 5 for % \n");
	printf("press 0 for exit  \n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	if(choice==0)
	{
		goto exit;
	}
	
	printf("\n\nEnter first number :");
	scanf("%d",&firstno);
	
	printf("Enter second number :");
	scanf("%d",&secondno);

	
	switch(choice)
	{
		case 1 : printf("\n\nThe sum of %d and %d is : %d ",firstno,secondno,sum(firstno,secondno));
		break;
		
		case 2 : printf("\nThe substraction of %d and %d is : %d ",firstno,secondno,sub(firstno,secondno));
		break;
		
		case 3 : printf("\nThe multiplication of %d and %d is : %d ",firstno,secondno,multiply(firstno,secondno));
		break;
		
		case 4 : printf("\nThe division of %d and %d is : %d ",firstno,secondno,divi(firstno,secondno));
		break;
		
		case 5 : printf("\nThe average of %d and %d is : %d ",firstno,secondno,avg(firstno,secondno));
		break;
		
		 
		
		
		
	}


	goto start;
	exit:
	printf("Your programme has been end ! ");
	
	
	
	
	
}
