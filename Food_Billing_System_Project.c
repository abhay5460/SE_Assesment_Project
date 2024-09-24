// Food Billing System //

#include<stdio.h>
int main()
{
	int choice , quantity , Orders ;
	float Total_Amount , Amount ;
	char ch;
	
	while(1)
	{
		//Display Food Item Available
		printf("----Welcome to Food Billing System----\n");
  		printf("-------------------------------\n");
		printf(" Food Item Available : \n");
		printf(" 1. Pizza 180Rs./pcs\n");
		printf(" 2. Burger 120Rs./pcs\n");
		printf(" 3. Dossa 150Rs./pcs\n");
		printf(" 4. Idli 90Rs./pcs\n");
		printf("-------------------------------------\n");
	
		printf("Enter the Choice (1-4) :");
		scanf("%d",&choice);
		
		printf("Enter the Quantity : ");
		scanf("%d",&quantity);
		
		// Calculate the expenses of selected item
		if(choice == 1)
		{
			printf("You have selected Pizza. \n");
			Amount = 180 * quantity;
			printf("Amount : %.2f\n",Amount);
		}
		else if(choice == 2)
		{
			printf("You have selected Burger. \n");
			Amount = 120 * quantity;
			printf("Amount : %.2f\n",Amount);
		}
		else if(choice == 3)
		{
			printf("You have selected Dossa. \n");
			Amount = 150 * quantity;
			printf("Amount : %.2f\n",Amount);
		}
		else if(choice == 4)
		{
			printf("You have selected Idli. \n");
			Amount = 90 * quantity;
			printf("Amount : %.2f\n",Amount);
		}
		else
		{
			printf("Invalid choice. Please try again.\n");
			continue;
		}
		
		Total_Amount += Amount ;
		
		Orders += quantity ;
		
		printf("Total Amount : Rs. %.2f \n",Total_Amount);
		
		printf("Do you want place more items (y & n) :");
		scanf(" %c",&ch);
		
		if (ch == 'n' || ch == 'N')
	        {
      			break;
   		}
		else
		{
			Continue;
		}
	}	
	// Display the final bill
	printf("Total Orders : No. %d \n",Orders);

  	printf("Final Bill: Rs. %.2f\n", Total_Amount);
}
