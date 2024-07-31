#include<stdio.h>
#include<conio.h>

void main()
{
	//   (x+y+z)²    Q.7
	int x,y,z;
	printf("Enter The Value of x :");
	scanf("%d",&x);
	printf("Enter The Value of y :");
	scanf("%d",&y);
	printf("Enter The Value of z :");
	scanf("%d",&z);
	printf("  (x+y+z)²  = %d", (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x))
);
	
	 
}