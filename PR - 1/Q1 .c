#include <stdio.h>
#include <conio.h>

void main ()

{
 	 int Celsius,Fahrenheit;
	 int F  = (9/5 * Celsius)+32;
	
	printf("Enter the Temperature in Celsius : ");
	scanf("%d",&Celsius);
	printf("the temperature in fahrenheit = %.3d", F);
}