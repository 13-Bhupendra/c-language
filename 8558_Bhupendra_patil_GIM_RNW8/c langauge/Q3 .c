#include<stdio.h>
#include<conio.h>

void main ()
{
	 int income , expend;
	 
	 printf("Enter your income : ");
	 scanf("%d",&income);
	 
	 printf("Enter your Expend : ");
	 scanf("%d",&expend);
	 
	 if(income<expend)
	 {
	 	printf("you are i n loss!!");
	 }
	 else if(income==expend)
	 {
	 	printf("your income and Expend both are equal !");
	 }
	 else
	 {
	 	printf("you are in profit !!");
	 }
	 
	 
	
	
}