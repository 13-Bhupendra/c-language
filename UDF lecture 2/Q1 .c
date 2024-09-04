#include<stdio.h>
#include<conio.h>

// QUESTION NO. 1 ->

void array()
{
	int n , i;
	
	printf("Enter the array size : ");
	scanf("%d",&n);

printf("\n");
	
	int a[n];
	
	for(i=0; i<=n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}

printf("\n");

	for(i=0; i<=n; i++)
	{
		printf("%d ",a[i]);
		
	}
	
printf("\n");

	int sum=0;
	
	for(i=0; i<=n; i++)
	{ 
		sum = sum + a[i];
			
	}
	printf("\nThe sum of array is :  %d",sum);
}




void main()
{
	array();	
}
