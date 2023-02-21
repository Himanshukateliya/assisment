#include<stdio.h>
#include<conio.h>
int main()
{
	int n,quantity,amount,price,totalamount=0;
	char addAnother;
	
	do
	{
		printf("\n-------------------MENU-------------------\n");
		printf("1. pasta        price=149rs/plate\n");
		printf("2. pizza        price=199rs/pcs\n");
		printf("3. burger       price=299rs/pcs\n");
		printf("4. sandwich     price=169rs/pcs\n");
		printf("5. frankie      price=139rs/pcs\n");
		printf("6. french fries price=99rs/plate\n");
		printf("7. brownie      price=119/pcs\n");
		printf("\n please enter your choise...... : ");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1:
			printf("\n you have choosen pasta");
			printf("\n enter the quantity : ");
			scanf("%d",&quantity);
			price= 149;
			break;
			
			case 2:
			printf("\n you have choosen pizza");
			printf("\n enter the quantity : ");
			scanf("%d",&quantity);
			price= 199;
			break;
			
			case 3:
			printf("\n you have choosen burger");
			printf("\n enter the quantity : ");
			scanf("%d",&quantity);
			price= 299;
			break;
			
			case 4:
			printf("\n you have choosen sandwich");
			printf("\n enter the quantity : ");
			scanf("%d",&quantity);
			price= 169;
			break;	
			
			case 5:
			printf("\n you have choosen frankie");
			printf("\n enter the quantity : ");
			scanf("%d",&quantity);
			price= 139;
			break;
			
			case 6:
			printf("\n you have choosen french fries");
			printf("\n enter the quantity : ");
			scanf("%d",&quantity);
			price= 99;
			break;
			
			case 7:
			printf("\n you have choosen brownie");
			printf("\n enter the quaantity : ");
			scanf("%d",&quantity);
			price= 119;
			break;
			
			default:
			printf("\n you have choosen wrong number");	
		}
		
		amount= price*quantity;
		printf("\n amount : %d",amount);
		
		totalamount= totalamount + amount;
		printf("\n total amount :%d",totalamount);
		
		printf("\n do you want to place more orders? Y & N :");
		
		addAnother=getch();
		
		
	}
	while(addAnother == 'y'  ||  addAnother == 'Y');
}
