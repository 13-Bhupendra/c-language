#include<stdio.h>
#include<conio.h>

void main ()

{
 	float English , Maths , Science ;
	
	printf("Enter the value of English : ");
	scanf("%f",&English);
	
	printf("Enter the value of  Maths : ");
	scanf("%f",& Maths);
	
	printf("Enter the value of Science  : ");
	scanf("%f",&Science);
	
	
{
				
  	if(English>100)
  	{
  		printf("Marks of English is invalid !");
    }
	
	else if(English<0)
	{
		printf("Marks of English is invalid !");
	}
	
}

{
				
  	if(Maths>100)
  	{
  		printf("Marks of  Maths is invalid !");
    }
	
	else if(Maths<0)
	{
		printf("Marks of  Maths is invalid !");
	}
	
}	

{
				
  	if( Science>100)
  	{
  		printf("Marks of Science is invalid !");
    }
	
	else if(Science<0)
	{
		printf("Marks of Science is invalid !");
	}
	
}

	printf("Average marks=%.2f",(English+Maths+Science)/3 );

}