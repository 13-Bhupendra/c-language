#include<stdio.h>
#include<conio.h>

void main()

{
	int n ,i;
	
	printf("Enter the array's size :");
	scanf("%d",&n);
	
printf("\n");

	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
printf("\n");
	
	for(i=0; i<n; i++)
	{
	 	if(a[i]<0)
		{
			printf("%d , ",a[i]);	
		}
	}
	
		
	
 



}
