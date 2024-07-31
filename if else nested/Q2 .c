#include<stdio.h>
#include<stdio.h>

void main()

{
	int w,x,y,z;
	
	printf("Enter the value of W : ");
	scanf("%d",&w);
	 
	printf("Enter the value of X : ");
	scanf("%d",&x);
	
	printf("Enter the value of Y : ");
	scanf("%d",&y);
	
	printf("Enter the value of Z : ");
	scanf("%d",&z);
	
	if(w>x)
	{
		if(w>y)
		{
			 if(w>z)
			 {
			 	printf("w is maximum");
			 }
			 else
			 {
			 	printf("z is maximum");
			 }
			 
		}
		else
		{
			 printf("y is maximum");
		}
	
	}
	
	else
	{
		printf("x is maximum");
	}
}