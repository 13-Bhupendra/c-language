#include<stdio.h>
#include<conio.h>

void main()

{
	int marks;
	char grade;
	printf("Enter your marks :");
	scanf("%d",&marks);
	
	(marks>=90 && marks<=100)?
	
		printf("Your Grade Is A ",grade = 'A')
	:
	
		(marks>=70 && marks<90)?
		
			printf("Your Grade Is B ",grade = 'B')
	
		:
		
			(marks>=50 && marks<70)?
			
				printf("Your Grade Is C ",grade = 'C')
		
			:
			
				(marks>=35 && marks<50)?
				
					printf("Your Grade Is D ",grade = 'D')
			
				:
				
					printf("Sorry, you are failed !");
					
					
				
	 	switch(grade)
		{
			case 'A': printf("Excellent work!");
			break;
			
			case 'B' : printf("well done !");
			break;
			
			case 'C' : printf("good job !");
			break;
			
			case 'D' : printf(" you passed but you could better !");
			break;
			
			case 'F' : printf( "sorry your failed !");
			break;
		
	    }		 	

if ( grade=='A' || grade=='B' || grade=='C' || grade=='D')
{
	printf("You are eligible for the next level.");
}
else if(grade=='F')
{
	printf("‘Please try again next time");
}
	
	
	 
	
	
	
}