 #include<stdio.h>
#include<conio.h>

void main ()

{
	int n,i;
	float avg,sum=0;
	
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
	
	for(i=0; i<n; i++)
	{
		sum= sum + a[i];
	}
	
	printf("\n");
	
	avg= sum/n;
	
	printf("Average of an array : %f",avg);
 
}