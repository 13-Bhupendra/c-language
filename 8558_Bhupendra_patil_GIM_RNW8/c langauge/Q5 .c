#include<stdio.h>
#include<conio.h>

void main ()
{
	int n ;
	
	printf("Enter any no. : ");
	scanf("%d",&n);
	
	int a[n] , i , sum=0;
	
	for(i=1; i<=n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=1; i<=n; i++)
	{
		printf("%d ",a[i]);
	 
	}
	
	for(i=1; i<=n; i++)
	{
		sum = sum + a[i];		 
	
	}
	
	printf("\nsum of element = %d ",sum);
	
	
	
	
	
	
}