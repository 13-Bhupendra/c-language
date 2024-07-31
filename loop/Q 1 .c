#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1 ,n,sum=0;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("sum = %d + %d ; sum=%d\n",sum,i,sum+i);
		sum= sum+i;
		i++;
	}
	printf("sum is %d",sum);
	
	
}