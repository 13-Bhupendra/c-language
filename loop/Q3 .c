#include<stdio.h>
#include<conio.h>

void main ()
{
	int i=1 ,n ;
	
	printf("Enter the value of n :");
	scanf("%d", &n);
	
	printf("Multiplication table of %d :\n", n);
	
	while(i<=10)
	{
	
	printf("%d * %d : %d\n ", n, i, n*i);
	i++;

 	}
	
  

}
	 