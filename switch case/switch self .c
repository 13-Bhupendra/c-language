#include<stdio.h>
#include<conio.h>

 main ()
{
	int choice;
	
	printf("jio call service\n\n");
	
	printf("press 1 for english\n");
	printf("press 1 for hindi\n");
	printf("press 1 for gujarati\n\n");
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1 :
			printf("press 1 for internet recharge\n");
			printf("press 2 for top-up recharge\n");
			printf("press 3 for special recharge\n\n");
			
			printf("Enter your choice :");
	 		scanf("%d",&choice);
	 		
	 		switch (choice)
			{
				case 1 : printf("your internet recharge is successfully done ! ");
				break;
				
				case 2 :printf("your top-up recharge is successfully done ! ");
				break;
				
				case 3 :printf("your  special recharge is successfully done ! ");
				break;
				
			}			
			
			default : (" Enter valid output ");
			
		break;
		
		case 2 :
			printf("internet recharge ke liye 1 dabaiye \n");
			printf("top-up recharge ke liye 2 dabaiye\n");
			printf("special recharge ke liye 3 dabaiye\n\n");
			
			printf("Enter your choice :");
	 		scanf("%d",&choice);
	 		
	 		switch (choice)
	 		{
	 			case 1 : printf("apka internet recharge safaltapurvak hoon gaya hai !");
				break;
				
				case 2 :printf("apka top-up recharge safaltapurvak hoon gaya hai !");
				break;
				
				case 3 :printf("apka special recharge safaltapurvak hoon gaya hai !");
				break;	
	 			
			}
		break;
		
		case 3 :
			printf("internet recharge mate 1 dabavo\n");
			printf("top-up recharge mate 2 dabavo\n");
			printf("special recharge mate 3 dabavo\n\n");
			
			printf("Enter your choice :");
	 		scanf("%d",&choice);
	 		
	 		switch (choice)
	 		{
	 			case 1 : printf("Tame safaltapurvak  internet Recharge karyu chhe !");
				break;
				
				case 2 :printf("Tame safaltapurvak top up Recharge karyu chhe !");
				break;
				
				case 3 :printf("Tame safaltapurvak Special Recharge karyu chhe ! ");
				break;	 
	 	
	 			
			}
		break;
		
	 
	}
	
	
	
	
	
	
	
	
	
}
