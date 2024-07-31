#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1 ,n,fact=1;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("fact = %d * %d ; fact=%d\n",fact,i,fact*i);
		fact = fact*i;
		i++;
	}
	printf("sum is %d\n",fact);
	
	
}