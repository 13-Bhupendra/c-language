#include<stdio.h>
#include<conio.h>

void main()
{
	int n , sum = 0;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	int i=1;
	
	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
			sum = sum + i;
		}
		i++;
		
	}while(i<=n);
	
	printf("\nsum %d",sum);
	
	
	
}