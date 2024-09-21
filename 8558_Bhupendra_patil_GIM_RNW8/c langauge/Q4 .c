#include<stdio.h>
#include<conio.h>

void main ()
{
	char alpha;
 
	printf("Enter alphabet : ");
	scanf("%c",&alpha);
 	
 	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
 	{
 		printf("The alphabet you enter is vowel.");
	}
	else
	{
		printf("The alphabet you enter is constant.");
	}
	
	
	
}