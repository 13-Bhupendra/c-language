#include<stdio.h>
#include<conio.h>

void main ()

{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("\n");
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
	 	printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);	
	}

printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}

printf("\n");
	
	printf("Length of array : %d",n);
}