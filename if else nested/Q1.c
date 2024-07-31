#include<stdio.h>
#include<stdio.h>

void main()

{
	int x,y,z;
	 
	printf("Enter the value of X : ");
	scanf("%d",&x);
	
	printf("Enter the value of Y : ");
	scanf("%d",&y);
	
	printf("Enter the value of Z : ");
	scanf("%d",&z);
	
	
	if(x<y)
	{
		if(x<z)	
		{
			printf("x is minimum");
		}
		
		else
		{
			printf("z is minimum");
		}
	}
	else
	{
		if(y<z)
		{
			printf("y is minimum");
		}
		
		else
		{
			printf("z is minimum");
		}
	}
		
}