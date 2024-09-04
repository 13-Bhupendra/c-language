#include<stdio.h>
#include<conio.h>

// Question no. 2 ->

void string(char name[])
{
	
	int lenght =0;
	int i ;
	
	for(i=0; name[i]!=NULL; i++)
	{
		lenght++;
	}
	printf("lenght is : %d ",lenght);
	
}

int main()
{
	string("bhupendra");
	return 0;
	
	
}
