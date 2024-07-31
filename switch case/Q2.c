#include<stdio.h>
#include<conio.h>

void main ()

{
	printf("jio call service\n\n");
	printf("Press 1 for English\n");
	printf("Press 2 for hindi\n");
	printf("Press 3 for  gujarati\n\n");
	 
	
	int choice,choice2;
	printf("Enter your choice :");
	scanf("%d", &choice);
	
	switch(choice)
{
  	case 1 : printf ("English\n\n");
  	{
  		printf("Press 1  internet recharge\n");
		printf("Press 2 for top-up recharge\n");
		printf("Press 3 for special recharge\n\n");
		printf("Enter your choice :");
		scanf("%d", &choice2);
		
  		switch(choice2)
  		{  
  			case 1 : printf("internet recharge\n");
  			printf("you have succefull internet recharge");
  			break;
  			case 2 : printf("top-up recharge\n");
  			printf("you have succefull top-up recharge");
  			break;
  			case 3 : printf("special recharge\n");
  			printf("you have succefull special recharge");
  			break;
  		}
		break;
  		
	}
	case 2 : printf ("hindi");
	{

		printf(" internet recharge ke liye 1 dabaiye\n");
		printf(" internet recharge ke liye 2 dabaiye\n\n");
		printf(" internet recharge ke liye 3 dabaiye\n\n\n");
		printf("Enter your choice :");
		scanf("%d", &choice2);
		
  		switch(choice2)
  		{  
  			case 1 : printf("internet recharge\n");
  			printf(" Aapne safaltapurvak Internet Recharge kar liya he.\n");
  			break;
  			case 2 : printf("top-up recharge\n");
  			printf(" Aapne safaltapurvak top-up Recharge kar liya he.\n");
  			break;
  			case 3 : printf("special recharge\n");
  			printf(" Aapne safaltapurvak  special Recharge kar liya he.\n\n");
  			break;
  		}
  	break;
  	}	
		case 3 : printf ("gujarati");
		{
			printf(" Internet Recharge mate 1 dabavo\n");
			printf(" Top-up Recharge mate 2 dabavo\n");
			printf("Press 3 for special recharge\n\n");
			printf(" Special Recharge mate 3 dabavo:");
			scanf("%d", &choice2);
		
  			switch(choice2)
  			{  
  				case 1 : printf("internet recharge\n");
  				printf("Tame safaltapurvak internet Recharge karyu chhe. ");
  				break;
  				case 2 : printf("top-up recharge\n");
  				printf(" Tame safaltapurvak  top up +Recharge karyu chhe.");
  				break;
  				case 3 : printf("special recharge\n");
  				printf(" Tame safaltapurvak Special Recharge karyu chhe.");
  				break;
  			}	
		break;
	}
}
 	 



	
	
	
	
}